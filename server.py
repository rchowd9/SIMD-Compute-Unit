import subprocess
import json
from http.server import HTTPServer, BaseHTTPRequestHandler

class SimulationHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        if self.path == "/health":
            self.send_response(200)
            self.end_headers()
            self.wfile.write(b"OK")
            return

        if self.path == "/run":
            try:
                # Execute simulation binary
                result = subprocess.run(
                    ["./obj_dir/Vsimd_compute_unit"],
                    capture_output=True,
                    text=True,
                    timeout=10
                )
                response = {
                    "status": "success",
                    "stdout": result.stdout,
                    "stderr": result.stderr
                }
                self.send_response(200)
            except Exception as e:
                response = {"status": "error", "message": str(e)}
                self.send_response(500)

            self.send_header("Content-Type", "application/json")
            self.end_headers()
            self.wfile.write(json.dumps(response).encode("utf-8"))
        else:
            self.send_response(404)
            self.end_headers()

def run(port=8080):
    server_address = ("", port)
    httpd = HTTPServer(server_address, SimulationHandler)
    print(f"Server listening on port {port}...")
    httpd.serve_forever()

if __name__ == "__main__":
    run()