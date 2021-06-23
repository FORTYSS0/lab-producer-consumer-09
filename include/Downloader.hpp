// Copyright 2021 by FORTYSS

#ifndef DOWNLOADER_HPP_
#define DOWNLOADER_HPP_
#include <Crawler.hpp>

class Downloader{
 public:
  Downloader(const int& num_workers) : loaders(num_workers){};

  Html load_html_list(const std::string& url);

  static Html loading_https(std::string& host, const std::string& target);

  static Html loading_http(const std::string& host, const std::string& target);

 private:

  ThreadPool loaders;
};
#endif  // DOWNLOADER_HPP_
