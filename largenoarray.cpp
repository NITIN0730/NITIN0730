#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    	int arr[10]={90,110,200,60,250,150,30,70,180,400};
    	int i,l=0;
    	for(i=0; i<=9; i++){
    		if(arr[i]>l) {
			
    	 l=arr[i];
    	}
	}
		cout<<l<<endl;
	}


