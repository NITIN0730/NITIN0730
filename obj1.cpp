#include<iostream>
#include<conio.h>
using namespace std;

class Father{
	public:
		string fname;
};
class son : public Father{
	public:
		string sname;
	void display(){
		cout<<"my name is "<<sname<<"my father name "<<fname<<endl;
	}
};
int main(){
  son obj;
    obj.sname="nitin ";
    obj.fname="sharad";
    obj.display();
}



