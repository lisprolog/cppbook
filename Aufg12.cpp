//Aufg12.cpp
//www.erlenkoetter.de

#include<iostream>
using namespace std;

int main(){

	char word[10];
	char word2[10];
	int x = 9;
	cout << "Input: A word(max 9 char): ";
	cin >> word;
	for(int i = 9; i > -1; i--){
		cout << word[i];
	}
	cout << "\n";
	return 0;
}
