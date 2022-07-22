#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  string a;
     cout<<"enter your word =";
  //   cin>>a;
   getline(cin,a);
     
    int i,count=0;
    
    for(i=0; a[i]!='\0';i++){
    	if(a[i]==32){
    		count++;
		}
	}
	cout<<"total ="<<count;
}

