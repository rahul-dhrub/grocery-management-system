#ifndef FRUITS_H
#define FRUITS_H
#include"base.h"
using namespace std;

class fruits:public base
{
private: 
int getunit_amount();
float price_per_item();
int set_value();
float per_unit();

public:
int  unit2add;
float wpu,ppu;
};
#endif
