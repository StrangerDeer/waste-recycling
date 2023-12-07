//
// Created by Bence on 06/12/2023.
//

#pragma once
#include <string>
#include <iostream>

class GarbageException {
 public:
  GarbageException(const std::string& msg) : message(msg) {};
  void print() const {std::cerr << message << std::endl;};

 private:
  std::string message;
};
