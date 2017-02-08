//bspl0014.cpp
//www.erlenkoetter.de
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char test[15];
	strcpy(test, "Hallo");
	cout << "\n" << test;
	cout << "\n" << strlen(test);
	strcat(test, " Welt!");
	cout << "\n" << test;
	cout << "\n" << strlen(test);
	cout << "\n";
	return 0;
}
