#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char text[50];
	cout<<"Enter your text = ";
	cin.getline(text,50);
	ofstream MyFile("nayan.txt");
	MyFile<<text;
	MyFile.close();
}


