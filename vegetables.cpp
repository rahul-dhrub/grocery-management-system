#include "vegetables.h"
using namespace std;

int vegetables::getunit_amount(){
  return amt2add;
}
float vegetables::price_per_item(){
  return ppk;
}
int vegetables::set_value(){
  amt2add --;
}
float vegetables::per_unit(){
  return vpk;
}

