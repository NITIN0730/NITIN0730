#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int a=30,b=20,c;
   int *p,*q;
   
   p=&a;
   q=&b;
   c=*p+*q;
   cout<<"answer ="<<c;
   
}

