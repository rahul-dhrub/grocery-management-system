#ifndef BASE_H
#define BASE_H
#include<string.h>
#include<iostream>
using namespace std;
class base
{ 
protected:
public:  
 int x,y,cal;
 string type; 
 long p_id;
  base(){};
  virtual int getunit_amount(){}
  virtual float price_per_item(){}
  virtual int set_value(){}
  virtual float per_unit(){}
};
#endif
