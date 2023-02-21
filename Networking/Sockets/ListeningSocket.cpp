#include "ListeningSocket.hpp"

HDE::ListeningSocket::ListeningSocket(int domain, int service,
    int protocol, int port, u_long interface,
        int bklg): BindingSocket(domain, service, protocol, port,
        interface)
{
    backlog = bklg;
    start_listening();
    std::cout << "Check" << std::endl;
    test_connection(listening);
}    

void HDE::ListeningSocket::start_listening()
{
    std::cout << get_connection() << std::endl;
    listening = listen(get_sock(), backlog);
}

int HDE::ListeningSocket::get_listening()
{
    return listening;
}

int HDE::ListeningSocket::get_backlog()
{
    return backlog;
}