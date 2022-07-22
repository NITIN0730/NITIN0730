#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    string a;
     a="hello good morning nitin patil";

     
    int i,alphabets=0,space=0,num=0;
    
    for(i=0; a[i]!='\0';i++){
    	if(a[i]>='a' && a[i]<='z'){
    		alphabets++;
		}else if(a[i]==32){
			space++;
		}else if(a[i]>='0' && a[i]<='9'){
			num++;
		}
	}
	cout<<"alphabets ="<<alphabets;
	cout<<"space ="<<space;
	cout<<"num ="<<num;
}
