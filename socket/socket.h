#ifndef _SOCKET_H_
#define _SOCKET_H_

#include <stdint.h>

namespace cppbase {
namespace server {
class Socket {
 public:
  Socket(int fd);

  virtual ~Socket();

  int get_fd() {
    return fd_;
  }

 protected:
  int fd_;
};
}
}

#endif