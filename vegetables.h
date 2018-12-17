#ifndef VEGETABLES_H
#define VEGETABLES_H
#include"base.h"
using namespace std;

class vegetables:public base
{
private:  
int getunit_amount();
float price_per_item();
int set_value();
float per_unit();

public:
float vpk,ppk,amt2add;
};

#endif
