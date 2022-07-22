#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
  char a[100];
  cout<<"enter the word :";
  cin>>a;
  
  int i,vowels=0;
  
  for(i=0; a[i]!=NULL; i++){
  	if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
  		vowels++;
	  }
  }
   cout<<"total no of vowels = "<<vowels;
}

