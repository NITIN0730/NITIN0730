#include<iostream>
#include<conio.h>
using namespace std;

class Area{
	public:
		void area(int a){
			cout<<3.14*a*a<<endl;
		}
		void area(int a,int b){
			cout<<a*b<<endl;
		}
};
int main(){
	Area obj;
	obj.area(5);
	obj.area(5,5);
}

