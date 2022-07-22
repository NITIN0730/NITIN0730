#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
  public:
     int x,y;
     int area(){return x*y;}
};
int main(){
	rectangle lb;
	cout<<"enter length of rectangle :";
	cin>>lb.x;
	cout<<"enter breadth of rectangle :";
	cin>>lb.y;
	cout<<"area:"<<lb.area();
}
