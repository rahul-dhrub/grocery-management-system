#ifndef NODE_H
#define NODE_H
#include"list.h"
#include"base.h"

class  node
{
 public:
  base* item;
  class node* next;
  friend class linked_list;
  friend class grocery;
  friend class base;    
};

#endif
