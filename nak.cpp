#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string abc;
	ifstream MyReadFile("new.txt");
	
	while(getline(MyReadFile,abc)){
		cout<<abc;
	} 
	MyReadFile.close();
}


