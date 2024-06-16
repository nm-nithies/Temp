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
    int client_socket;
    struct sockaddr_in server_addr;

    // Create socket

    // Connect to the server
    if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1)
    {
        perror("Connection failed");
        exit(EXIT_FAILURE);
    }

    char inputFile[] = "ooty.JPG";
    char outputFile[] = "ooty_output.png";
 %s\n", message);

    close(client_socket);

    return 0;
}
