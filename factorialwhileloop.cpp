#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int n,sum=1;
  
  cout<<"enter any no :";
  cin>>n;
  
  while(n>0)
  {
  	sum*=n;
  	n--;
  }
  cout<<"factorial is :"<<sum;
  
}

