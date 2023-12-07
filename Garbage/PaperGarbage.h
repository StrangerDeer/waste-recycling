//
// Created by Bence on 06/12/2023.
//

#pragma once
#include "Garbage.h"

class PaperGarbage : public  Garbage {

 public:
  PaperGarbage(std::string name) : Garbage(std::move(name)){};
  bool isSqueezed = false;
  void squeeze();
};
