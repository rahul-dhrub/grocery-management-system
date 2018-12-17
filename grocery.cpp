
#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include<string.h>
#include"grocery.h"
using namespace std;




  long grocery::generate_id()
  { long id =rand()%155555;
    return id;
  }
  
  grocery::grocery()
  {  ifstream  fruitp("fruits.txt");
      ifstream  vegetablep("vegetables.txt");
   
    while(!fruitp.eof())
    {
      fruits* fruit1=new fruits();
      fruitp>>fruit1->type>>fruit1->x>>fruit1->y>>fruit1->wpu>>fruit1->ppu>>fruit1->cal>>fruit1->unit2add;
       fruit1->p_id=generate_id();

       list.add_node(fruit1);
    }
    
    while(!vegetablep.eof())
    {
      vegetables* vegetable1=new vegetables();

      vegetablep>>vegetable1->type>>vegetable1->x>>vegetable1->y>>vegetable1->ppk>>vegetable1->vpk>>vegetable1->cal>>vegetable1->amt2add;
      vegetable1->p_id=generate_id();
       
       list.add_node(vegetable1);
    }
    list.print();
  }
        void grocery::addfruit(string a,int b,int c,float d,float e,int f,int g){
          fruits* data=new fruits();
           data->p_id=generate_id();
           data->type=a;
           data->x=b;
           data->y=c;
           data->wpu=d;
           data->ppu=e;
           data->cal=f;
           data->unit2add=g;
          list.add_node(data);
            list.print();
          }

         void grocery::addvegetable(string a,int b,int c,float d,float e,int f,int g){
          vegetables* data=new vegetables();
           data->p_id=generate_id();
           data->type=a;        
           data->x=b;
           data->y=c;
           data->ppk=d;
           data->vpk=e;
           data->cal=f;
           data->amt2add=g;
          list.add_node(data); 
         }  


        void grocery::sell(string a,int number)      
         {  
          if(number<0) return;
          base* data;
          node* cursor;
          node* cursor1;
          cursor1=list.gethead();
          cursor=list.gethead();
          int n,count=0;
          float cost;
          base* point;
          float m_dis=100000000,x,y,dis;   
          while(cursor1->next!=NULL)
          { 
            string b=(cursor1->item)->type;
            if (b.compare(a)==0)              
             {count++;}
           cursor1=cursor1->next;
          }
          
         if(count==0)
          cout<<"sufficient Item not available"<<endl;
         else
         {  
          while(cursor!=NULL){
           if (a.compare((cursor->item)->type)==0)
           {     
           if((cursor->item)->getunit_amount()<=0)
           {
           list.del(cursor);                    //make delete function
           } 
           else
                {
                x=(cursor->item)->x;
                y=(cursor->item)->y;
                 dis=(x*x)+(y*y);
                if(dis<m_dis)
                {
                 m_dis=dis;
                 data=(cursor->item);
                }
                else if(dis==m_dis)
                {    
                if((cursor->item)->price_per_item() < data->price_per_item())
                 data=(cursor->item)  ;        
                }
                }
              }cursor=cursor->next;
             }   
                while(number>0&&(data->getunit_amount())>0)
                {
                 data->set_value();
                 cout<<data->getunit_amount()<<" "<< number<<endl;
                 number--;

                 cost=cost+data->price_per_item();
                }
               
                if(number>0)
                {
                 sell(a,number);
                }
              }
           
              
             cout<<"Amount to be paid"<<cost<<endl;
            }

     node* grocery::gettop()
      {   
        node* top=list.gethead();
        return top;
       } 



    int grocery::detail() {                  
      string item1;
      node* tmp; 
      tmp=list.gethead(); 
      int count=0; 

  
    cout<<"Enter the name of fruit/vegetable "<<endl;
    cin>>item1;
     while(tmp!=NULL)
    {  
     string a=(tmp->item)->type;
     if(a.compare(item1)==0)
      count=count+((tmp->item)->getunit_amount());
       tmp=tmp->next;
     }
     cout<<"No.of "<<item1<<"available "<<count<<endl;
    }

  void grocery::print()
   { list.print();
    }


   int grocery::calories(int cal)
   {   
   if(cal<=0)
    {return 0;}
    node* temp=list.gethead();
    node* point;
    int min=1000000;
    static int turn=1;
    int count=0;

    while(temp!=NULL){
     if((temp->item->cal)<min)
     {
      min=(temp->item->cal);
      point=temp;
     }
      temp=temp->next;
    }

    if(min>cal)
    {if(turn=1)
     cout<<"Enter large calory value "<<endl;
     else
     return 0;
    }

  else
    { 
     while(cal>0 && (point->item)->getunit_amount()>0)  
      {
       cal=cal-(point->item)->cal;
      (point->item)->set_value();
      count++;
      }
      cout<<count<<" "<< point->item->type <<"added in bascket!";
      }
     if((point->item)->getunit_amount()==0) list.del(point);
     //list.print();
     calories(cal);
     }


 void grocery::area_display()
 {
 node* temp=list.gethead();
 int x,y,a,b,radius;

 cout<<"Enter a center x, y and radius"<<endl;
 cin >> x >> y >> radius; 
 
  while(temp!=NULL)
  {
   b=temp->item->y;
   a=temp->item->x;
   int count=0;
   int dis=((x-a)*(x-a))+((y-b)*(y-b));
   if(dis<=(radius*radius))
   {
   cout<<temp->item->type<<"  quantity :"<<temp->item->getunit_amount()<<endl;
   count++;
   }
   temp=temp->next;
  }
  if(cout==0)
  cout<<"No grocery found in this area ,Give an another try witrh cahnge input!"<<endl;
  }

