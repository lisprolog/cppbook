//bspl0005.cpp
//www.erlenkoetter.de
#include<iostream>
using namespace std;

int main(){
	float a;
	double b;
	a = 10.12345678901234567890;
	b = 10.12345678901234567890;
	cout << "\n" << a;
	cout << "\n" << b;
	cout.precision(16);
	cout << "\n" << a;
	cout << "\n" << b << "\n";
	return 0;
}
