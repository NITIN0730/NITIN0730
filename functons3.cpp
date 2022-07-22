#include<iostream>
#include<conio.h>
using namespace std;

int addition(int a, int b){
	int ans;
	ans=a+b;;
	return ans;
	
}
void check(int x){
	if(x%2==0){
		cout<<"no is even ";
	}else{
		cout<<"no is odd ";
	}
}
int main(){
	int x,n1,n2;
	cout<<"enter 2 numbers =";
	cin>>n1>>n2;
	
	x=addition(n1,n2);
	cout<<x<<" ";
    check(x); 
}
