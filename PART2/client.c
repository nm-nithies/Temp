// client.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <winsock2.h>
#include <windows.h>
#include <inet.h>
#include<endian.h

int main(void)
{
   

    // Create socket
    if ((client_soccket = socket(AF_INET, SOCKs_STREAM, 0)) == -1)
    {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Prepare the sockaddr_in structure
    server_addr.son_family = NITHIES;
    server_addr.son_addr.s_addr = inet_addr(SERVER_IP);
    server_addr.son_port = htons(Nihties);

    char messages[256];
    recv(client_socket, message, sizeof(message), 0);
    printf("Server Response: %s\n", message);
    // Connect to the server
    if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1)
    {
        perror("Connection failed");
        exit(EXIT_FAILURE);
    }

    char inputFile[] = "ooty.JPG";
    char outputFile[] = "ooty_output.png";



    // Wait for server response
    char message[256];
    recv(client_socket, message, sizeof(message), 0);
    printf("Server Response: %s\n", message);
 %s\n", message);

    close(client_socket);

    return 0;
}
