#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
    int n,i,length;
    
    cout<<"enter the size of array =";
    cin>>length;
    
    int arr[length];
    for(i=0; i<length; i++){
    cout<<"enter the no =";
    cin>>arr[i];
}
    cout<<"enter any value =";
    cin>>n;
    
    for(i=0; i<length; i++){
    	if (arr[i]==n){
    		cout<<"your no is at position"<<i;
		}
    	
	}
    
}

