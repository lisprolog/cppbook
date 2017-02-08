// bspl0017.cpp
// www.erlenkoetter.de

#include<iostream>
using namespace std;

int main(){
	double wert = 0.0;
	cout << "\nBitte eine Zahl eingeben: ";
	cin >> wert;
	if(wert == 10){
		cout << "Der Wert ist zehn.";
	}else{
		if(wert > 10.0){
			cout << "Der Wert ist groesser als zehn.";
		}else{
			cout << "Der Wert ist kleiner als zehn.";
		}
	}
	return 0;
}
