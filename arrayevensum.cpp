#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int arr[10]={44,87,41,29,6,78,542,301,77,34};
  
  int i,sum=0;
  
  for(i=0;i<=9;i++){
  	if(arr[i]%2==0){
  		cout<<arr[i]<<endl;
  	sum=sum+arr[i];
	  }
	  
  }
  cout<<sum;	  
}

