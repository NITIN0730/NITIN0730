#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d,e,tot,avg;
	
	cout<<"maths";
	cin>>a;
	cout<<"physics";
	cin>>b;
	cout<<"biology";
	cin>>c;
    cout<<"chemistry";
	cin>>d;
	cout<<"IT";
	cin>>e;
	
	tot=a+b+c+d+e;
	cout<<"total marks"<<tot<<endl;
	
	avg=tot/5;
	cout<<"avg"<<avg<<endl<<endl;
	
	if(avg>=80)
	{
		cout<<"excelent";
	}
	else if(avg>=60 && avg<80)
	{
		cout<<"average";
		}	
	else if(avg>=50 && avg<60)
	{
		cout<<"bad";
	}
	else
	{
		cout<<"failed";
	}
	
}

