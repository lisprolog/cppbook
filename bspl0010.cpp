// bspl0010.cpp
// www.erlenkoetter.de
#include<iostream>
using namespace std;

int main(){
	int test[3];
	test[0] = 5;
	test[1] = 62;
	test[2] = 7;
	cout << '\n' << test[0] << " " << test[1] << " " << test[2];
	cout << '\n' << (test[0] + test[1] + test[2]);
	cout << '\n' << test[3]; // wrong index!!
	return 0;
}
