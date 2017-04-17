#matthew hallberg
import socket
#UDP_IP = "10.0.0.109"
UDP_IP = "172.20.10.2"

UDP_PORT = 1999
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) # UDP
sock.bind((UDP_IP, UDP_PORT))

while True:
	data, addr = sock.recvfrom(28) # buffer size is 1024 bytes
	print ("received message:", data)
