#include<iostream>
#include<conio.h>
using namespace std;
class india{
	public:
		int iruns1,iruns2,iruns3,iruns4,iruns5;

        void igetruns(){
        	cout<<"enter iruns =";
        	cin>>iruns1>>iruns2>>iruns3>>iruns4>>iruns5;
		}	
};
	class pakistan{
		public:
    		int runs1,runs2,runs3,runs4,runs5;
    		
    		void getruns(){
        	cout<<"enter runs =";
        	cin>>runs1>>runs2>>runs3>>runs4>>runs5;
		}	

	};
	class abc : public india,public pakistan{
		public:
			void winner(){
			 int total1, total2;
			 total1=iruns1+iruns2+iruns3+iruns4+iruns5;
			 total2=runs1+runs2+runs3+runs4+runs5;
			 
			 if(total1>total2){
			 	cout<<"The champion team india :";
			 }else if(total1<total2){
			 	cout<<"The champion team pakistan :";
			 }else{
			 	cout<<"The match tie :";
			 }
			}
	};
		
int main(){
	abc obj1;
	obj1.igetruns();
	obj1.getruns();
	obj1.winner();
}
