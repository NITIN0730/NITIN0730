#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d,e,tot,avg;
	
	cout<<"enter 1st sub";
	cin>>a;
	cout<<"enter 2nd sub";
	cin>>b;
	cout<<"enter 3rd sub";
	cin>>c;
	cout<<"enter 4th sub";
	cin>>d;
	cout<<"enter 5th sub";
	cin>>e;
	tot=a+b+c+d+e;
	
	cout<<"total marks"<<tot;
	
	avg=tot/5;
	cout<<"\nAvg"<<avg;
	
	if(avg>90)
	{
		cout<<"you got A grade";
	}
	else if (70>=90)
	{
		cout<<"you got B grade";
	}
	else if(50>=70)
	{
		cout<<"you got C grade";
	}
	else if (avg<50)
	{
		cout<<"you are failed";
	}
}
