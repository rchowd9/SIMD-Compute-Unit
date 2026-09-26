FROM ubuntu:22.04

# Prevent interactive prompts during apt install
ENV DEBIAN_FRONTEND=noninteractive

# Install SystemVerilog & C++ build tools
RUN apt-get update && apt-get install -y \
    verilator \
    g++ \
    make \
    python3 \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

# Copy project source files
COPY . /app

# Build the Verilator C++ model executable
RUN make build

# Expose HTTP port for Fly.io
EXPOSE 8080

# Start the simulation HTTP server
CMD ["python3", "server.py"]