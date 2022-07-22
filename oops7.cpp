#include<iostream>
#include<conio.h>
using namespace std;
class student{
	public:
		string name;
		int marks1; int marks2; int total;
		
		student(string a,int b, int c){
			name=a;
			marks1=b;
			marks2=c;
		}
	
		void displaytotal(){
			total=marks1+marks2;
			cout<<"total marks is "<<total<<endl;
			
		}
};
int main(){
	 string name;
	 int m1,m2;
	 cout<<"enter name :"<<endl;
	 cin>>name;
	 cout<<"enter marks of 2 sub :";
	 cin>>m1>>m2;
	 student s1(name,m1,m2);
	 s1.displaytotal();
	 
	 
}

