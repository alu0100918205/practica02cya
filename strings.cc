#include "strings.h"

//Constructor
Strings::Strings(Symbol newSymbol){
    Strings::addSymbol(newSymbol);
}

//Destructor
Strings::~Strings()
{
}

void Strings::addSymbol(Symbol newSymbol){
  Strings::stringSymbols_.push_back(newSymbol);
}

int Strings::getLenght(){
 return Strings::stringSymbols_.size();
}

Strings Strings::stringReverse(){
  Strings newString(Symbol(""));
  for (int i = Strings::stringSymbols_.size() - 1; i >= 0; i--)
  {
    newString.addSymbol(Strings::stringSymbols_[i]);
  }
  return newString;
}

std::vector<Strings> Strings::getPrefixes(){
 /* std::vector<Strings> myPrefixes;
  for (int i = 0; i < Strings::getLenght(); i++)
    for (int j = 0; j <= i; j++)
    {
      myPrefixes.push_back()
    }*/
  //hacer pushfront de &
  
}

std::vector<Strings> Strings::getSuffixes(){

}

std::vector<Strings> Strings::getSubstrings(){

}


void Strings::printString(){
  std::cout << "String = ";
  for (int i = 0; i < Strings::stringSymbols_.size(); i++){
    Strings::stringSymbols_[i].printSymbol();
  }
  std::cout << std::endl;
}

