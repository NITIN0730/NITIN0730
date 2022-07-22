#include<iostream>
#include<conio.h>
using namespace std;
class marks{
	public:
		int s1,s2,s3,s4,s5;
		void display(){
			cout<<s1+s2+s3+s4+s5<<endl;
		}
		
};
int main(){
	marks b1,b2;
	int tot=0;
	b1.s1=50;
	b1.s2=60;
	b1.s3=80;
	b1.s4=45;
	b1.s5=68;
	b2.s1=58;
	b2.s2=70;
	b2.s3=49;
	b2.s4=75;
	b2.s5=60;
		
	b1.display();
	b2.display();
}




