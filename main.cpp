#include<iostream>
#include<string.h>
#include<fstream>
#include <ctime>
#include<stdlib.h>
#include"base.h"
#include"fruits.h"
#include"vegetables.h"
#include"grocery.h"
#include"list.h"
#include"node.h"

using namespace std;

int main()
{
class grocery g1;
int choice,d,x,y,wpu,cal,ppu,u,vpk,ppk,n;
string a,b;

cout<< "Enter your choice (number)"<<endl;
cout<<"1 :Add fruit or vegetable in the list"<<endl;
cout<<"2 :Sell the fruit/vegetables. "<<endl;
cout<<"3 :To know the quantity available of any fruit or veg. "<<endl;
cout<<"4 :To know details of grocery in a particular area."<<endl;
cout<<"5 :get maximum groceries with given calories."<<endl;
cout<<"6 :Again print the entire list"<<endl;

cin>>choice;

switch(choice)
{
case 1: cout<<"enter 1 for fruit and 2for vegetable"<<endl; 
        cin>>d;
        if(d=1)
	        {cout<<"Fruit name , X ,Y ,weight per unit,price per unit,calory,unit to add"<<endl;
	        cin>>a>>x>>y>>wpu>>ppu>>cal>>u;
	        g1.addfruit(a,x,y,wpu,ppu,cal,u);
	    }
        else if(d=2)
	        {cout<<"vegetable name , X ,Y ,price per kg, volume per kg,calory,amount to add"<<endl;
	        cin>>a>>x>>y>>wpu>>ppu>>cal>>u;
	        g1.addfruit(a,x,y,ppk,vpk,cal,u);
	    }
break;

case 2: cout<<"Enter name of grocery and amount/unit of grocery to be sold"<<endl;
	cin>>b>>n;
	g1.sell(b,n);
break;

case 3: g1.detail();
break;

case 4: g1.area_display();
break;

case 5: cout<<"Enter the amount of calories you needed"<<endl;
	 cin>>n;
	 g1.calories(n);
break;

case 6: g1.print();
break;

default:
cout<<"Enter a valid number"<<endl;
}


return 0;
}


