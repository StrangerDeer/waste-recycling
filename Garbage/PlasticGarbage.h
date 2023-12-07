//
// Created by Bence on 06/12/2023.
//

#pragma once
#include "Garbage.h"

class PlasticGarbage : public Garbage {

 public:
  PlasticGarbage(std::string name) : Garbage(std::move(name)){};
  bool isClean = false;
  void clean();
};
