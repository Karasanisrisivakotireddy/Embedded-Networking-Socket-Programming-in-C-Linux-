This repository contains implementations of socket programming concepts as part of the Embedded Networking (CLA-2) laboratory work. The objective of this project is to understand and demonstrate inter-process communication using TCP and UDP protocols in a Linux environment using the C programming language.

Initially, a single TCP client–server application was developed to demonstrate basic connection-oriented communication. The server listens on a specified port, accepts a client connection, receives a message, and sends a response back to the client.

Next, the program was extended to support multiple TCP clients using the select() system call. This approach allows the server to handle multiple client connections simultaneously without using multithreading, making it efficient and suitable for embedded systems. The server monitors the master socket and all connected client sockets, handling incoming data and client disconnections dynamically.

Finally, a UDP client–server application was implemented to demonstrate connectionless communication. The UDP server waits for a datagram from the client, processes it, and sends a reply back without establishing a persistent connection.

This repository helps in understanding TCP vs UDP communication, single-client vs multi-client handling, and efficient socket management techniques used in embedded networking systems.
