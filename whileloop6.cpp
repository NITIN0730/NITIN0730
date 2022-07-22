#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int x,y,z;
   
   cout<<"enter start no: ";
   cin>>x;
   cout<<"enter end no: ";
   cin>>y;
   cout<<"enter any no: ";
   cin>>z;
   
    while(x<=y)
    {
    	if(x%z==0){
    		cout<<x<<endl;
		}
    	   x++;
	}
}

