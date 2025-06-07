#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
using namespace std;


bool initialize (){        
    return true;
}



/*
    // init winsock library
     // create socket
     // get ip
     // bind ip with socket
     // accept
     // recv and send
    // close socket
*/

int main() {
    if (!initialize()) {
        cerr << "Initialization failed!" << endl;
        return 1;
    }

    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd < 0) {
        perror("Socket creation failed");
        return 1;
    }

    std::cout << "Socket created successfully." << std::endl;
    close(server_fd);
    return 0;


}
