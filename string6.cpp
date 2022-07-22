#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
 char a[100];
  cout<<"enter your sentences";
  cin>>a;
  
  int l;
  l=strlen(a);
  cout<<"length ="<<l;
  
  if(l%2==0){
  strupr(a);
  cout<<a;
}else{
	strlwr(a);
	cout<<a;
   }
}
