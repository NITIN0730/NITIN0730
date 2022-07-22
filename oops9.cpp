#include<iostream>
#include<conio.h>
using namespace std;
class employee{
	public:
		int id;
		string name;
		int salary;
		employee(int id,string name, int salary){
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void display(){
			cout<<id<<" "<<name<<" "<<salary<<endl;
		}
		
};
int main(){
	int a,c;
	string b;
	cout<<"enter id: ";
	cin>>a;
	cout<<"enter name: ";
	cin>>b;
	cout<<"enter salary: ";
	cin>>c;
	employee obj1(a,b,c);
	obj1.display();
	
}
