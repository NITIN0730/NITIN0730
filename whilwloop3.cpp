#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int x,y,n;
  cout<<"enter start no";
  cin>>x;
  
  cout<<"enter end no";
  cin>>y;
  
  n=x;
  while(n>=y)
  {
  	if(n%2!=0){
	  
  	cout<<n<<endl;
  }
  	n--;
  }
}

