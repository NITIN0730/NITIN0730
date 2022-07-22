#include<iostream>
#include<conio.h>
using namespace std;

void evenodd(int x){
	if(x%2==0)
	  cout<<x<<" is even no ";
	else
	  cout<<x<<" is odd no ";
}
int main(){
	int a;
	cout<<"enter numbers =";
	cin>>a;
	evenodd(a);

}

