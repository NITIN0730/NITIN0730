#include<iostream>
#include<conio.h>
 using namespace std;
 int main()
 {
   int l,b;
   float r,area;
   int ch;
   
   cout<<"1.area of rectangle";
   cout<<"\n2.area of circle";
   
   cout<<"\nenter your choice :";
   cin>>ch;
   
   switch(ch)
   {
   	case 1:
   		   
   		cout<<"\nenter length and breadth of rectangle :";
   		cin>>l>>b;
   		area=l*b;
   		cout<<area;
   		break;
   	    
   	case 2:
   		   
   		cout<<"\nenter radius of circle :";
   		cin>>r;
   		area=3.14*r*r;
   		cout<<area;
   		break;
   		
        default :
			cout<<"invalid";
			break;
    
    }
}
