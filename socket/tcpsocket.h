#include <bits/stringfwd.h>
#include <stdio.h>
#include "socket.h"

namespace cppbase {
namespace server {
class TcpSocket : public Socket {
 public:
  TcpSocket(int fd);

  bool bind(const std::string &host, int port);

  ssize_t read(void *buffer, size_t count);

  ssize_t write(void *buffer, size_t count);
};
}
}
