// server.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <inet.h>

#include "stb_image.h"
#include "stb_image_write.h"
#include <math.h>

#define PORT 8080
#define SERVER_IP "127.0.0.1"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"
#include <math.h>


    // Create socket
    if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Prepare the sockaddr_in structure
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

ful\n");

    // Listen on the socket
    if (listen(server_socket, MAX_CONNECTIONS) == -1)
    {
        perror("Listen failed");
        exit(EXIT_FAILURE);
    }
    printf("Server listening on port %d...\n", PORT);

            continue;
        }

        // Fork a new process to handle the client
        if (fork() == 0)
        {
            close(server_socket); // Child process doesn't need the listening socket

client
            char message[] = "Image processing completed";
            send(new_socket, message, sizeof(message), 0);

            close(new_socket); // Close the client socket
            exit(0);           // Exit the child process
        }
        else
        {
            close(new_socket); // Parent process doesn't need the client socket
        }
    }

    close(server_socket);

    return 0;
}(inputFile, &width, &height, &channels, 0);
    if (img == NULL)
    {
        perror("Error in loading the image");
        exit(EXIT_FAILURE);
    }

    unsigned char *gray_img = malloc(width * height);
    puts("Converting to grayscale");
    for (int i = 0; i < width * height * channels; i += channels)
    {
        int gray = 0.299 * img[i] + 0.587 * img[i + 1] + 0.114 * img[i + 2];
        gray_img[i / channels] = gray;
    }
;
    }

    puts("Writing image");
    stbi_write_png(outputFile, width, height, 1, gray_img, width);

    stbi_image_free(img);
    free(gray_img);
}

