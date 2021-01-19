// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_CLIENT_HPP_
#define INCLUDE_CLIENT_HPP_
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <cstdlib>
#include <iostream>
#include <string>

#include "UrlAdress.hpp"

namespace beast = boost::beast;  // from <boost/beast.hpp>
namespace http = beast::http;    // from <boost/beast/http.hpp>
namespace net = boost::asio;     // from <boost/asio.hpp>
using tcp = net::ip::tcp;        // from <boost/asio/ip/tcp.hpp>

struct Request_parameters {
    std::string url;
    std::string host;
    std::string port;
    std::string target;
    std::string request_body;
    int version;
};

class Client {
 public:
  Client(int argc, char* argv[]);
  int Run();

 private:
  void prepareCommandLine();
  int argc_;
  char** argv_;
  Request_parameters parametrs;
};

#endif  // INCLUDE_CLIENT_HPP_
