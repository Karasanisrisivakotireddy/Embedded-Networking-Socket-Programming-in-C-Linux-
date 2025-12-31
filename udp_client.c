
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>

#define PORT 8080

int main() {
    int sockfd;
    char buffer[1024];
    struct sockaddr_in serv_addr;
    socklen_t len = sizeof(serv_addr);

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    sendto(sockfd, "Hello from UDP Client", 22, 0,
           (struct sockaddr *)&serv_addr, len);

    recvfrom(sockfd, buffer, 1024, 0,
             (struct sockaddr *)&serv_addr, &len);

    close(sockfd);
    return 0;
}
