#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int arr[3][3]={{4,6,1},{8,3,5},{6,3,5}},i,j;
   
   for(i=0; i<3;i++){
   	for(j=0; j<3; j++){
   		cout<<arr[i][j]*arr[i][j]<<" ";
	   }
	   cout<<endl;
   }
}

