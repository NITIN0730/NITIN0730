#include<iostream>
#include<conio.h>
using namespace std;
  class Australia{
  	public:
  		int agold,asilver, abronze;
  		
  	void amedals(){
  		cout<<"Enter Australia medals :";
  		cin>>agold>>asilver>>abronze;
	  }
  };
class India{
  	public:
  		int igold,isilver, ibronze;
  		
  	void imedals(){
  		cout<<"Enter India medals :";
  		cin>>igold>>isilver>>ibronze;
	  }
  };
  class USA{
  	public:
  		int ugold,usilver, ubronze;
  		
  	void umedals(){
  		cout<<"Enter USA medals :";
  		cin>>ugold>>usilver>>ubronze;
	  }
  };
  class olympic:public Australia,public India, public USA{
  	public:
  		void maxmedals(){
  			int total1,total2,total3;
  			total1=agold+asilver+abronze;
  			total2=igold+isilver+ibronze;
  			total3=ugold+usilver+ubronze;
  		
		  cout<<"Australia has no of medals :"<<total1<<endl;
		  cout<<"India has no of medals :"<<total2<<endl;
		  cout<<"USA has no of medals :"<<total3<<endl;
		  	
		  }
  		
  };
int main(){
	olympic obj1;
	obj1.amedals();
	obj1.imedals();
	obj1.umedals();
	obj1.maxmedals();
}
  
