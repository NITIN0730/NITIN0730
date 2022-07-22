#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
   char x[20],y[20];
   cout<<"enter any word :";
   cin>>x;
   
   int c;
   strcpy(y,x);
   strrev(y);
   c=strcmp(x,y);
   
   if(c==0){
   	cout<<"palindrome ";
   }else{
   	cout<<"not palindrone ";
   }
   
}

