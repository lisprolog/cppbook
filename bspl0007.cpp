//bspl0007.cpp
//www.erlenkoetter.de
#include<iostream>
using namespace std;

int main(){
	int wert1;
	float wert2;
	double wert3;
	wert1 = 4;
	wert2 = 7.3;
	wert3 = wert1 + wert2;
	cout << "\n" << wert3;
	wert3 = wert1 + static_cast<int>(wert2);
	cout << "\n" << wert3;
	return 0;
}
