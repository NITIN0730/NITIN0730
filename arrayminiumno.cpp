#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int arr[10]={55,70,30,170,80,200,110,150,5,90};
  
  int i,l=arr[0];
  
  for(i=0; i<=9; i++){
  	if(arr[i]<l){
	  
  	  l=arr[i];
  }
  }
  cout<<"smallest no ="<<l;
}

