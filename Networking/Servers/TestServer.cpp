#include "TestServer.hpp"

void HDE::TestServer::accepter()
{
    struct sockaddr_in address = get_socket()->get_address();
    int addrlen = sizeof(address);
    new_socket = accept(get_socket()->get_sock(), 
        (struct sockaddr *)&address, 
        (socklen_t *)&addrlen);
}