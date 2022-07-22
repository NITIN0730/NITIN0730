#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr1[5]={6,2,9,5,4},arr2[5]={0,9,2,8,1},arr3[10],i;
    
    for(i=0; i<=5; i++){
    	
    	arr3[i]=arr1[i];
    	arr3[i+5]=arr2[i];	
	}
	for(i=0; i<10; i++){
		cout<<arr3[i];
	}
    
}

