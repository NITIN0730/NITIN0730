#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int i,length;
   
   cout<<"enter the size of array =";
   cin>>length;
   
   int arr[length];
   for(i=0; i<length; i++){
   	cout<<"enter any value =";
   	cin>>arr[i];
   }
   cout<<endl;
   
   for(i=0; i<length ; i++){
   	if(arr[i]%5==0){
    cout<<arr[i]<<endl;
}
   }
}

