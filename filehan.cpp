#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char a[50],b[50];
	cout<<"Enter your name : ";
	cin.getline(a,50);
	cout<<"Enter your age : ";
	cin.getline(b,50);
	ofstream MyFile("nakul.txt");
	MyFile<<a<<"age is"<<b;
	MyFile.close();
}

