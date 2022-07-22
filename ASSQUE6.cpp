#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n;
	float arr[100];
	
	cout<<"Enter total no of element : "<<endl;
	cin>>n;
	
	for (i=0;i<n;i++){
		cout<<"Enter Number "<<i+1<<" ";
	}
	for (i=1;i<n;i++){
		if(arr[0]<arr[i])
		arr[0]=arr[i];
	}
	cout<<"largest element = "<<arr[0];
}
