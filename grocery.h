#ifndef GROCERY_H
#define GROCERY_H
#include"base.h"
#include"list.h"
#include"node.h"
#include"vegetables.h"
#include"fruits.h"
#include"base.h"

using namespace std;


class grocery
{
 private:
  long generate_id();
 public:
 linked_list list;   
 grocery();
 void addfruit(string a,int b,int c,float d,float e,int f,int g);
 void addvegetable(string a,int b,int c,float d,float e,int f,int g);
 void print();
 void sell(string a,int number);      
 node* gettop();
 int detail() ;
 int calories(int cal);
 void area_display();
  friend class base;
};
#endif
