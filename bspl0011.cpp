// bspl0011.cpp
// www.erlenkoetter.de
//
#include<iostream>
using namespace std;

int main(){
	int test[2][3];
	test[0][0]=1;
	test[0][1]=2;
	test[0][2]=3;
	test[1][0]=4;
	test[1][1]=5;
	test[1][2]=6;
	cout <<"\n";
	cout << " " << int (test[0][0]);
	cout << " " << int (test[0][1]);
	cout << " " << int (test[0][2]);
	cout << " " << int (test[1][0]);
	cout << " " << int (test[1][1]);
	cout << " " << int (test[1][2]);
	cout << "\n";
	return 0;
}
