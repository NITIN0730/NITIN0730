#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1, num2,num3,num4,num;
	
	cout<<"enter four numbers =";
	cin>>num1>>num2>>num3>>num4;
	num=num1+num2+num3+num4;
	if(num>=100)
	{
		cout<<"win";
		
	}
	else
	{
		cout<<"loss";
	}
}
