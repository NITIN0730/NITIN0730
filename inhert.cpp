#include<iostream>
#include<conio.h>
using namespace std;
class number{
	public:
		int num;

class cube{
	public:
		int cube;
		void display(){
			cout<<"enter num"<<num<<" cube is "<<cube<<endl;
		}
};
int main(){
	int x;
	cout<<"enter a number =" ;
	cin>>x;
 number obj1(x);
 obj1.display();
}
