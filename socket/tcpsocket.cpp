#include "tcpsocket.h"

cppbase::server::TcpSocket::TcpSocket(int fd) : Socket(fd) {
}

bool cppbase::server::TcpSocket::bind(const std::string &host, int port) {
  return false;
}

ssize_t cppbase::server::TcpSocket::read(void *buffer, size_t count) {
  return 0;
}

ssize_t cppbase::server::TcpSocket::write(void *buffer, size_t count) {
  return 0;
}
