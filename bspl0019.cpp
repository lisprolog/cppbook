// bspl0019.cpp
// www.erlenkoetter.de

#include<iostream>
using namespace std;

int main(){
	int zahl;
	cout << "\nBitte eine Zahl von 1-5 eingeben: ";
	cin >> zahl;

	switch(zahl){
		case 1:
			cout << "Das ";
		case 2:
			cout << "ist ";
		case 3: 
			cout << "ein ";
		case 4:
			cout << "kurzer ";
		case 5:
			cout << "Satz ";
	}
	cout << "\n";
	return 0;
}
