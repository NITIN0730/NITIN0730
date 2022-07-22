#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,n2,n3,ch;
	cout<<"enter any 2 numbers=";
	cin>>n1>>n2;
	
	cout<<"1)add\n2)sub\n3)div\n4)mult"<<endl;
	
	cout<<"select any no :";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
		n3=n1+n2;
		cout<<"add"<<n3;
		break;
		
		case 2:
		n3=n1-n2;
		cout<<"sub"<<n3;
		break;
		
		case 3:
		n3=n1/n2;
		cout<<"div"<<n3;
		break;
		
		case 4:
		n3=n1*n2;
		cout<<"mult"<<n3;
		break;
		
		default :
			cout<<"invalid";
			break;
		
	}
	
}
