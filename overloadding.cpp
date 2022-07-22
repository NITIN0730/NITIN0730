#include<iostream>
#include<conio.h>
using namespace std;

class employee{
	public:
		string name;
		int age;
		int salary;
		
	void getinformation(){
		cout<<"Enter name =";
		cin>>name;
		cout<<"enter age =";
		cin>>age;
		cout<<"enter salary =";
		cin>>salary;
	}
	 void printinformation(){
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<salary<<endl;
	}
	void operator++(){
		salary=salary+1000;
	}
};
int main(){
	employee obj;
	obj.getinformation();
	obj.printinformation();
	++obj;
	obj.printinformation();
}
