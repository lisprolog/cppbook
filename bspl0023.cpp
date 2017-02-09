//bspl0023.cpp
//www.erlenkoetter.de
#include <iostream>
using namespace std;

int main(){
	int zaehler = 1;
	cout << "\n";
	while(zaehler < 5){
		cout << zaehler << " ";
		zaehler++;
	}
	do{
		cout << "\nBitte eine Zahl eingeben (0=Ende): ";
		cin >> zaehler;
	}while(zaehler != 0);
	cout << "\n";
	return 0;
}
