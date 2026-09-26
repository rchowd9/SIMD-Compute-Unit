FROM ubuntu:22.04

# Prevent interactive prompts during apt install
ENV DEBIAN_FRONTEND=noninteractive

# Update package lists, install CA certificates, and install build tools with retries
RUN apt-get clean && \
    apt-get update -o Acquire::Retries=3 && \
    apt-get install -y --no-install-recommends ca-certificates && \
    apt-get install -y --no-install-recommends \
        verilator \
        g++ \
        make \
        perl \
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