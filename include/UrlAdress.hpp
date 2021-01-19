// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_URL_HPP_
#define INCLUDE_URL_HPP_
#include <string>

const char k_protocol_name[] = "http://";
const size_t k_size_name_of_protocol = 7;

class UrlAdress {
 public:
  explicit UrlAdress(std::string url);
  std::string full_url();
  std::string _host();
  std::string _port();
  std::string _target();

 private:
  std::string url;
};

#endif  // INCLUDE_URL_HPP_
