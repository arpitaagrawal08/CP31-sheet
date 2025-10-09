import socket

client = socket.socket()
client.connect(("127.0.0.1", 8080))  # make sure port matches your server
print("Connected to mini-redis. Enter your commands:")

while True:
    cmd = input("> ")
    if cmd.lower() == "quit":
        break

    client.send(cmd.encode())
    reply = client.recv(1024).decode()
    print(reply.strip())

client.close()
print("Disconnected.")
