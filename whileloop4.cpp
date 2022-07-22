#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int n, sum=0;
  cout<<"enter the number :";
  cin>>n;
  while(n>0)
  {
  	sum+=n;
	  n--;
   }
   cout<<"\n sum is :"<<sum;
}

