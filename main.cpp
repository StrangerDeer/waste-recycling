#include <iostream>
#include "Garbage/Garbage.h"
#include "Garbage/PaperGarbage.h"
#include "Garbage/PlasticGarbage.h"
#include "Dustbin.h"
#include "Exceptions/GarbageException.h"

int main(){
  Garbage g("g");
  PlasticGarbage plastic("bottle");
  PaperGarbage paper("paper");
  Dustbin bin("red");

  try{
    plastic.clean();
    bin.throwOutPlasticGarbage(plastic);
  }catch(const GarbageException& e){
    e.print();
  }


  return 0;
}