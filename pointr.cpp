#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int a=5, b=10;
  int *p,*q;
  
  p=&b;
  q=&a;
  
  cout<<"a ="<<*p<<endl;
  cout<<"b ="<<*q<<endl;
}

