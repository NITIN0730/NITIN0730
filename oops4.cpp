#include<iostream>
#include<conio.h>
using namespace std;

class Student{
	public:
		int phy,chem,maths,english,comp;
		int sum=0;
		void addmarks(){
			cout<<"enter marks = ";
			cin>>phy>>chem>>maths>>english>>comp;
		}
		void displaytotal(){
			sum=phy+chem+maths+english+comp;
			cout<<"total marks is "<<sum<<endl;
		}
};
 int main(){
 	Student S1,S2;
 	S1.addmarks();
 	S2.addmarks();
 	S1.displaytotal();
 	S2.displaytotal();
 	
 }

