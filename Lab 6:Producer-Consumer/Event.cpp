#include "Event.h"
#include <iostream>
#include <stdlib.h>

Event::Event(){
  character='a'+rand()%26;
  std::cout << character;
}

bool Event::consume(){
  char betterChar=character - 32;
  std::cout << betterChar;
}
