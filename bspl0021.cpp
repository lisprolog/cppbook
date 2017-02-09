// bspl0021.cpp
//www.erlenkoetter.de

#include<iostream>
using namespace std;

int main(){
	int i;
	cout << "\nErste Schleife: ";
	for(i=10;i<13;i++){
		cout << i << " ";
	}
	cout << "\nZweite Schleife: ";
	for(;i>11;i--){
		cout << i << " ";
	}
	cout << "\n";
	return 0;
}
