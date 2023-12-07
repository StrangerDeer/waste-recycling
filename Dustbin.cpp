//
// Created by Bence on 06/12/2023.
//

#include "Dustbin.h"
Dustbin::Dustbin(std::string color) : color(color){}

void Dustbin::throwOutGarbage(Garbage& garbage) {
  houseWasteContent.push_back(garbage);
}

void Dustbin::throwOutPaperGarbage(PaperGarbage& paper) {

  if(paper.isSqueezed){
    paperContent.push_back(paper);
  }else{
    throw GarbageException("Garbage is not squeezed!");
  }
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage& plastic) {
  if(plastic.isClean){
    plasticContent.push_back(plastic);
  }else{
    throw GarbageException("Garbage is not cleaned");
  }
}

void Dustbin::emptyContents() {
  plasticContent.clear();
  paperContent.clear();
  houseWasteContent.clear();
}