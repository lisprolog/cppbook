// bspl0020.cpp
// www.erlenkoetter.de

#include<iostream>
using namespace std;

int main(){
	char zeichen;
	cout << "\nBitte geben sie einen Buchstaben ein: ";
	cin >> zeichen;

	switch(zeichen){
		case 'A':
		case 'a':
			cout << "Buchstabe A ";
			break;
		case 'B':
		case 'b': 
			cout << "Buchstabe B ";
			break;
		case 'C':
		case 'c':
			cout << "Buchstabe C ";
			break;
		default:
			cout << "kenn ich nicht!";
	}
	cout << "\n";
	return 0;
}
