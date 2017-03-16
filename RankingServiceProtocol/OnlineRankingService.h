/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef OnlineRankingService_H
#define OnlineRankingService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "RankingService_types.h"

namespace ranking {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class OnlineRankingServiceIf {
 public:
  virtual ~OnlineRankingServiceIf() {}
  virtual void ranking(std::string& _return, const std::string& broadcasterId, const std::string& adList) = 0;
};

class OnlineRankingServiceIfFactory {
 public:
  typedef OnlineRankingServiceIf Handler;

  virtual ~OnlineRankingServiceIfFactory() {}

  virtual OnlineRankingServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(OnlineRankingServiceIf* /* handler */) = 0;
};

class OnlineRankingServiceIfSingletonFactory : virtual public OnlineRankingServiceIfFactory {
 public:
  OnlineRankingServiceIfSingletonFactory(const boost::shared_ptr<OnlineRankingServiceIf>& iface) : iface_(iface) {}
  virtual ~OnlineRankingServiceIfSingletonFactory() {}

  virtual OnlineRankingServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(OnlineRankingServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<OnlineRankingServiceIf> iface_;
};

class OnlineRankingServiceNull : virtual public OnlineRankingServiceIf {
 public:
  virtual ~OnlineRankingServiceNull() {}
  void ranking(std::string& /* _return */, const std::string& /* broadcasterId */, const std::string& /* adList */) {
    return;
  }
};

typedef struct _OnlineRankingService_ranking_args__isset {
  _OnlineRankingService_ranking_args__isset() : broadcasterId(false), adList(false) {}
  bool broadcasterId :1;
  bool adList :1;
} _OnlineRankingService_ranking_args__isset;

class OnlineRankingService_ranking_args {
 public:

  OnlineRankingService_ranking_args(const OnlineRankingService_ranking_args&);
  OnlineRankingService_ranking_args& operator=(const OnlineRankingService_ranking_args&);
  OnlineRankingService_ranking_args() : broadcasterId(), adList() {
  }

  virtual ~OnlineRankingService_ranking_args() throw();
  std::string broadcasterId;
  std::string adList;

  _OnlineRankingService_ranking_args__isset __isset;

  void __set_broadcasterId(const std::string& val);

  void __set_adList(const std::string& val);

  bool operator == (const OnlineRankingService_ranking_args & rhs) const
  {
    if (!(broadcasterId == rhs.broadcasterId))
      return false;
    if (!(adList == rhs.adList))
      return false;
    return true;
  }
  bool operator != (const OnlineRankingService_ranking_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OnlineRankingService_ranking_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class OnlineRankingService_ranking_pargs {
 public:


  virtual ~OnlineRankingService_ranking_pargs() throw();
  const std::string* broadcasterId;
  const std::string* adList;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _OnlineRankingService_ranking_result__isset {
  _OnlineRankingService_ranking_result__isset() : success(false) {}
  bool success :1;
} _OnlineRankingService_ranking_result__isset;

class OnlineRankingService_ranking_result {
 public:

  OnlineRankingService_ranking_result(const OnlineRankingService_ranking_result&);
  OnlineRankingService_ranking_result& operator=(const OnlineRankingService_ranking_result&);
  OnlineRankingService_ranking_result() : success() {
  }

  virtual ~OnlineRankingService_ranking_result() throw();
  std::string success;

  _OnlineRankingService_ranking_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const OnlineRankingService_ranking_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const OnlineRankingService_ranking_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OnlineRankingService_ranking_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _OnlineRankingService_ranking_presult__isset {
  _OnlineRankingService_ranking_presult__isset() : success(false) {}
  bool success :1;
} _OnlineRankingService_ranking_presult__isset;

class OnlineRankingService_ranking_presult {
 public:


  virtual ~OnlineRankingService_ranking_presult() throw();
  std::string* success;

  _OnlineRankingService_ranking_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class OnlineRankingServiceClient : virtual public OnlineRankingServiceIf {
 public:
  OnlineRankingServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  OnlineRankingServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void ranking(std::string& _return, const std::string& broadcasterId, const std::string& adList);
  void send_ranking(const std::string& broadcasterId, const std::string& adList);
  void recv_ranking(std::string& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class OnlineRankingServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<OnlineRankingServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (OnlineRankingServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ranking(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  OnlineRankingServiceProcessor(boost::shared_ptr<OnlineRankingServiceIf> iface) :
    iface_(iface) {
    processMap_["ranking"] = &OnlineRankingServiceProcessor::process_ranking;
  }

  virtual ~OnlineRankingServiceProcessor() {}
};

class OnlineRankingServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  OnlineRankingServiceProcessorFactory(const ::boost::shared_ptr< OnlineRankingServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< OnlineRankingServiceIfFactory > handlerFactory_;
};

class OnlineRankingServiceMultiface : virtual public OnlineRankingServiceIf {
 public:
  OnlineRankingServiceMultiface(std::vector<boost::shared_ptr<OnlineRankingServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~OnlineRankingServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<OnlineRankingServiceIf> > ifaces_;
  OnlineRankingServiceMultiface() {}
  void add(boost::shared_ptr<OnlineRankingServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void ranking(std::string& _return, const std::string& broadcasterId, const std::string& adList) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ranking(_return, broadcasterId, adList);
    }
    ifaces_[i]->ranking(_return, broadcasterId, adList);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class OnlineRankingServiceConcurrentClient : virtual public OnlineRankingServiceIf {
 public:
  OnlineRankingServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  OnlineRankingServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void ranking(std::string& _return, const std::string& broadcasterId, const std::string& adList);
  int32_t send_ranking(const std::string& broadcasterId, const std::string& adList);
  void recv_ranking(std::string& _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

} // namespace

#endif