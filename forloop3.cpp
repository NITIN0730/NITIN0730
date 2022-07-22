#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int i,n1,n2,osum=0,esum=0;
  cout<<"enter start no: ";
  cin>>n1;
  
  cout<<"enter end no: ";
  cin>>n2;
  
  for(i=n1 ; i<=n2; i++){
  	if(i%2==1)
  	   esum=esum+i;
    else 
       osum=osum+i;
  }
   cout<<"sum of all odd no :"<<esum<<endl;
   cout<<"sum of all even no :"<<osum<<endl;
   
  
}

