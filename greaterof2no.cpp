#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2;
	
	cout<<"enter two numbers =";
	cin>>num1>>num2;
	
	
	if(num1>num2)
	{
		cout<<num1<<" is greater";
	}
	else if(num2>num1)
	{
		cout<<num2<<" is greter";
	}
	else{
		cout<<"both are equal";
	}
}
