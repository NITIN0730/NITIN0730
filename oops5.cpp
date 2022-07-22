#include<iostream>
#include<conio.h>
using namespace std;

class student{
	public:
		int id;
		int age;
		string name;
		
		student(){
			cout<<"Enter id, age, name = ";
			cin>>id>>age>>name;
		}
		void display(){
			cout<<"My ID ="<<id<<",my age ="<<age<<" and my name "<<name<<endl;
		}
};
int main(){
	student s1,s2,s3;
	s1.display();
	s2.display();
	s3.display();
	}

