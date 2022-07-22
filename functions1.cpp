#include<iostream>
#include<conio.h>
using namespace std;

 int avg( int a,int b, int c){
    int ans;
	ans=a+b+c;
	return ans/3;	
 }
 
 int main(){
 	int x,n1,n2,n3;
 	cout<<"enter 3 numbers =";
 	cin>>n1>>n2>>n3;
 	x=avg(n1,n2,n3);
 	cout<<x;
 }
    	
 


