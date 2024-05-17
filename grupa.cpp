#include <iostream>
#include "grupa.h"



void grupa::showAll() {
	cout << "Toti elevii grupei sunt: ";
	for (int i = 0; i < elevi.size(); i++) {
			cout << elevi[i].getNume() << " , ";
	}
	cout << endl;
	cout << endl;

}

void grupa::adaugaStudent(Student x) {
	elevi.push_back(x);
}
void grupa::showBStudii() {
	cout << "Elevii ce beneficiaza de bursa de studiu: ";
	for (int i = 0; i < elevi.size(); i++) {
		if (elevi[i].getMedie() >= 8.5 && elevi[i].getMedie() < 9.5)
			cout << elevi[i].getNume() << " , ";
	}
	cout << endl;
	cout << endl;
}

void grupa::showBMerit() {
	cout << "Elevii ce beneficiaza de bursa de merit: ";
	for (int i = 0; i < elevi.size(); i++) {
		if (elevi[i].getMedie() >=9.5)
			cout << elevi[i].getNume() << " , ";
	}
	cout << endl;
	cout << endl;

}

void grupa::deletePicati() {
	for (int i = 0; i < elevi.size(); ++i) {
		if (elevi[i].getNota1() < 5 && elevi[i].getNota2() < 5 && elevi[i].getNota3() < 5) {
			elevi.erase(elevi.begin() + i);
		}
	}
}

void grupa::showNrElevi() {
	int nrelevi{};
	for (int i = 0; i < elevi.size(); i++) {
		nrelevi++;
	}
	cout << "In grupa sunt: " << nrelevi << " elevi"<<endl<<endl;
}

