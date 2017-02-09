//bspl0025.cpp
//www.erlenkoetter.de

#include<iostream>
using namespace std;

int main(){
	int i,j;
	for(i=0; i<=100; i++){
		for(j = 1000; j>0; j--){
			if(i==50 && j==999){
				goto ende;
			}
		}
	}
	ende:
	cout << "\nProgramm wurde beendet mit ";
	cout << "i =  " << i << " und j = " << j;
	cout << "\n";
	return 0;
}
