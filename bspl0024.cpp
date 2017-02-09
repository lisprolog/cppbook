//bspl0024.cpp
//www.erlenkoetter.de

#include<iostream>
using namespace std;

int main(){
	for(int i=1; i<=5; i++){
		if (i == 3){
			continue;
		}
		cout << i << " ";
	}
	cout << "\n";
	return 0;
}
