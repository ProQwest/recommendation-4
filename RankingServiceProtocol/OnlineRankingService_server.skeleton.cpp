// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "OnlineRankingService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::ranking;

class OnlineRankingServiceHandler : virtual public OnlineRankingServiceIf {
 public:
  OnlineRankingServiceHandler() {
    // Your initialization goes here
  }

  void ranking(std::string& _return, const std::string& broadcasterId, const std::string& adList) {
    // Your implementation goes here
    printf("ranking\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<OnlineRankingServiceHandler> handler(new OnlineRankingServiceHandler());
  shared_ptr<TProcessor> processor(new OnlineRankingServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}
