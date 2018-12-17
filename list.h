#ifndef LIST_H
#define LIST_H
#include "base.h"
#include"node.h"
using namespace std;

class linked_list
{
private:
  class node  *head,*tail,*temp;
public:
 linked_list();
 void add_node(base* n);
 void del(node* pointer);
 node* gethead();
 void print();
 friend class grocery;
};

#endif
