#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main () {

    char server_msg[256] = "Hello There";
    char server_respond[256];
    int network_socket;
    network_socket = socket(AF_INET,SOCK_STREAM,0);
    
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons (10000);
    server_address.sin_addr.s_addr = inet_addr("ipaddr");
    
    int status = connect(network_socket,(struct sockaddr*) &server_address, sizeof(server_address));
    
    if(status == -1){
        printf ("there was an error ");
        }
    
    send(network_socket,server_mag,sizeof(server_mag),0);
    
    recv(network_socket,server_respond,sizeof(server_respond,0);
    
    printf("server message: ", server_respond);
    close(network_socket);
    
    return 0;
    
    }
