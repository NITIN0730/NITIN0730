#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int nitin[5]={20,40,30,90,70};
  
  int i,sum=0;
  
   for(i=0;i<=4;i++){
   	 sum=sum+nitin[i];
   	  cout<<nitin[i]<<endl;
   }
   cout<<sum;
}

