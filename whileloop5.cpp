#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int x,y,n;
   cout<<"enter start no";
   cin>>x;
   
   cout<<"enter end no";
   cin>>y;
   n=x;
   while(n<=y)
   {
   	if(n%5==0)
   	{
   		cout<<"no divisble by"<<n<<endl;
	   }
	   n++;
   }
}
