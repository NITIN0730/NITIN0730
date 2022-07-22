#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int arr[3][3]={{5,2,6},{7,9,2},{8,5,3}},i,j;
  
  for(i=0; i<3; i++){
  	for(j=0; j<3; j++){
  		cout<<arr[i][j]<<"\t";
	  }
	  cout<<endl;
  }
  cout<<endl;
  for(i=0; i<3; i++){
  	for(j=0; j<3; j++){
  		if(i>j){
  			cout<<" "<<"\t";
		  }
		  else{
		  	cout<<arr[i][j]<<"\t";
		  }
	  }
	   cout<<endl;
  }
}

