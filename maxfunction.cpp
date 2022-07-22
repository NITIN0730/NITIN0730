#include<iostream>
#include<conio.h>
using namespace std;

	int max( int n1,int n2){
		int ans;
		if(n1>n2){
		   return n1;
		 }else{
		 	return n2;
		 }
		x= max(n1,n2);
		cout<<"maximum no ="<<x;
	}
	}
	int main(){
		int x,n1,n2;
		cout<<"enter 2 number =";
		cin>>n1>>n2;
