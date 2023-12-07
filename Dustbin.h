//
// Created by Bence on 06/12/2023.
//

#pragma once
#include <string>
#include <vector>
#include "Garbage/PaperGarbage.h"
#include "Garbage/PlasticGarbage.h"
#include "Garbage/Garbage.h"
#include "Exceptions/GarbageException.h"

class Dustbin {

 public:
  Dustbin(std::string color);
  std::string color;
  std::vector<PaperGarbage> paperContent;
  std::vector<PlasticGarbage> plasticContent;
  std::vector<Garbage> houseWasteContent;
  void throwOutGarbage(Garbage& garbage);
  void throwOutPlasticGarbage(PlasticGarbage& plastic);
  void throwOutPaperGarbage(PaperGarbage& paper);
  void emptyContents();
};
