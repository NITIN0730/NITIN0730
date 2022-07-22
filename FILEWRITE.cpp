#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main(){
	ofstream MyFile("new.txt");
	MyFile<<"Nitin Patil\n My Age is 21";
	MyFile.close();
}
