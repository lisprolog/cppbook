//Aufg10.cpp
//www.erlenkoetter.de

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	a = 2;
	b = 5;
	c = 7;

	if(!(a < b && c <= a + b || a - b < c)){
		cout << "\nRot";
	}else{
		cout << "\nGruen";
	}
	cout << "\n";
	return 0;
}
