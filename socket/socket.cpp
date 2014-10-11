#include "socket.h"
#include "unistd.h"

cppbase::server::Socket::Socket(int fd)
    : fd_(fd) {
}

cppbase::server::Socket::~Socket() {
  ::close(fd_);
}
