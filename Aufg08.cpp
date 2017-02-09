//Aufg08.cpp
//www.erlenkoetter.de
#include<iostream>
using namespace std;

int main(){
	struct personal{
		char Name[31];
		long PersNr;
	};

	personal Mitarbeiter[3]={"Meier",100922, 
				"Gandermann",100873,
				"Schmatz",101920};

	cout << "\nPersonalnummer von Meier	 " << "XXX";
	cout << "\nName von Mitarbeiter 1000873	 " << "XXX";
	cout << "\nErster Buchstabe von Mitarbeiter 101920 " << "XXX";


	return 0;
}
