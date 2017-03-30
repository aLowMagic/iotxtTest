#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
int main() {
	char test[100];
	char testt[100];
	ifstream input("Text.txt",ios::in|ios::out);
	if (input.is_open()) {
		while (!input.eof()) {
			input.getline(test, 100);
			cout << test << endl;
		}
	}
	else { exit(1); }
	system("pause");
	ifstream inputin("Text.txt", ios::in|ios::out);
	ofstream output("textt.txt", ios::out||ios::in);
	while (output.is_open() && !inputin.eof()) {
		cout<<"~"<<endl;
		inputin.getline(test, 100);
		output << test << endl;
		
	}
	output.close();
	input.close();
	system("pause");
	exit(1);
 }