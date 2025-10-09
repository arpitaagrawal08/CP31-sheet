import socket
client=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
client.connect(('localhost:',8080))
client.sendall(b"hi server!")
data=client.recv(100).decode()
print(f"message from server:{data}")
client.close()
