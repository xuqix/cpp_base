#include "tcpsocket.h"

#ifndef _TCPSERVERSOCKET_H_
#define _TCPSERVERSOCKET_H_
namespace cppbase {
namespace server {
class TcpServerSocket : public TcpSocket {
 public:
  TcpServerSocket(int fd);

  bool Listen();

  bool Accept(TcpSocket &socket);
};
}
}
#endif