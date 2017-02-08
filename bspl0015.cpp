//bspl0015.cpp
//www.erlenkoetter.de

#include<iostream>
using namespace std;

int main(){
	struct artikel{
		int artNr;
		double umsatz;
	};
	artikel xyz;
	xyz.artNr=2277;
	xyz.umsatz=2345.85;
	cout << "\n" << xyz.artNr;
	cout << "\n" << xyz.umsatz;
	cout << "\n";
	return 0;
}
