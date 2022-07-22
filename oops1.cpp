#include<iostream>
#include<conio.h>
using namespace std;

class student{
	public:
		int roll;
		int age;
		string name;
		
		void display(){
			cout<<"my roll is"<<roll<<"my age is "<<age<<endl;
		}
	  
};
int main(){
	student s1,s2;
	int sum=0;
	s1.roll=10;
	s1.age=15;
	s1.name="deep";
	s2.roll=55;
	s2.age=25;
	s2.name="nil";
	
	s1.display();
	s2.display();
	
	sum=s1.age+s2.age;
	 cout<<sum;
}
