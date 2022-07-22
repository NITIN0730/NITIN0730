#include<iostream>
#include<conio.h>
using namespace std;
class student{
      public:
	    int id;
		int rollnum;
		string name;
		
		void addstudent(){
			cout<<"enter id = ";
			cin>>id;
			cout<<"enter roll = ";
			cin>>rollnum;
			cout<<"enter name = ";
			cin>>name;
		}	
		void displayinformation(){
			cout<<"my name is "<<name<<", my id  "<<id<<" and my roll is "<<rollnum<<endl;
		}
};

int main(){
	student s1,s2;
	s1.addstudent();
	s2.addstudent();
    s1.displayinformation();
	s2.displayinformation();	
}
	


