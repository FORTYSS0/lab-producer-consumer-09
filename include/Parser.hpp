// Copyright 2021 by FORTYSS

#ifndef PARSER_HPP
#define PARSER_HPP
#include <Crawler.hpp>

class Parser{
 public:
  Parser(const int& num_workers,
         std::vector<std::string>& ref_img_)
      : parsers(num_workers),
        ref_img(ref_img_) {};

  void search_for_links(GumboNode* node, const Html& html);

  void find_links(const Html& html);

  void search_for_img(GumboNode* node, const Html& html);

  void find_img(const Html& html);

  std::deque<std::string> parse(const Html& html, bool flag);

 private:

  ThreadPool parsers;
  std::deque<std::string> links;
  std::vector<std::string>& ref_img;
};
#endif  // PARSER_HPP
