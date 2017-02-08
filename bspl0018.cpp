// bspl0018.cpp
// www.erlenkoetter.de

#include<iostream>
using namespace std;

int main(){
	int a,b;
	a=b=0;
	cout << "\nBitte erste Ganzzahl eingeben(a): ";
	cin >> a;
	cout << "\nBitte zweite Ganzzahl eingeben(b): ";
	cin >> b;

	if(a == 1 && b == 2){
		cout << "\na=1 und b=2";
	}
	if(a == 3 || b == 6){
		cout << "\na=3 oder b=6";
	}
	if(a >= 1 && a <= 49){
		cout << "\na>=1 und a <= 49";
	}
	if(!(a == 1)){
		cout << "\na nicht gleich 1!";
	}
	if(a != 1){
		cout << "\na ungleich 1";
	}
	cout << "\n";
	return 0;
}
