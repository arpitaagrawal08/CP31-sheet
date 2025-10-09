import socket
import threading

server = socket.socket()
server.bind(("localhost", 8080))
server.listen(5)
print("Mini-redis running on localhost:8080")

def client_handler(conn, addr):
    print("Connected:", addr)
    store = {}

    while True:
        data = conn.recv(1024).decode().strip()
        if not data:
            break

        parts = data.split()
        cmd = parts[0].upper()

        if cmd == "SET" and len(parts) >= 3:
            key, value = parts[1], parts[2]
            store[key] = value
            conn.sendall(b"OK\n")

        elif cmd == "GET" and len(parts) >= 2:
            key = parts[1]
            value = store.get(key, "(nil)")
            conn.sendall(f"{value}\n".encode())

        else:
            conn.sendall(b"ERR unknown command\n")

    print("Disconnected:", addr)
    conn.close()

# ✅ Accept connections in a loop
while True:
    conn, addr = server.accept()
    threading.Thread(target=client_handler, args=(conn, addr), daemon=True).start()
