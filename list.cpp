#include"list.h"
#include<iostream>
#include<string.h>
using namespace std;


    linked_list::linked_list()
     {
        head = NULL;
        tail = NULL;
     }

    void linked_list::add_node(base* n)
     {
        node * temp=new node;
        temp->next=NULL;
        temp->item=n;
        if(head == NULL)
        {
	         head = temp;
	         tail = temp;
         }
      else
      {    
	       (tail->next) = temp;
	       tail = tail->next;
      }
     }

    void linked_list::del(node* pointer)
    { 
      if((head->item)->p_id==(pointer->item)->p_id){
      	node* temp=head;
        head=head->next;
        delete temp;
        return;
      }
      node* tmp2=head;

       if(tail->item->p_id==pointer->item->p_id){
        while((tmp2->next->next)->item->p_id!=pointer->item->p_id)
        tmp2=tmp2->next;
        tmp2=tail;
        delete pointer;
        return;
      }

        while((tmp2->next)->item->p_id!=(pointer->item)->p_id)
          tmp2=tmp2->next;
        tmp2->next=pointer->next;
        delete pointer;    
     }

      node* linked_list::gethead(){
      return head; 
     }

    void linked_list::print(){
        node* temp=head;                                                                     
        while(temp!=NULL){
        base* a=(temp->item); 
        cout<<(temp->item)->type<<" "<<(temp->item)->p_id<<" "<<(temp->item)->x<<" "<<(temp->item)->y<<" "<<(temp->item)->per_unit()<<" " ;
        cout<< (temp->item)->price_per_item()<<" "<< (temp->item)->cal<<" "<< (temp->item)->getunit_amount()<<endl;
        temp=temp->next;
        }
    }
                                             
  

