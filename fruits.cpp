#include "fruits.h"

using namespace std;

 int fruits::getunit_amount(){
  return unit2add;
}
float fruits::price_per_item(){
  return ppu;
}
 int fruits::set_value(){
   unit2add --;
}
float fruits::per_unit(){
  return wpu;
}

