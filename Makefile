client:
	gcc client.c -o client
	gcc server.c -o server
clear:
	rm client
	rm server