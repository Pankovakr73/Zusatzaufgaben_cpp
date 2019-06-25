#include "Votum.h"

Votum::Votum(int anzahlWahlMoeglichkeiten) {
	this->wahlen = new int[this->anzahlWahlMoeglichkeiten = anzahlWahlMoeglichkeiten]{ 0 };
}

Votum::~Votum() {
	delete[] wahlen;
}

void Votum::waehlen(int wahlnummer) {
	this->wahlen[wahlnummer - 1]++;
}

void Votum::wahlErgebnis(){
    //zeigt die wahloptionen an
	cout << "Ihre Wahl Optionen " << endl;
	for (int i = 0; i < this->anzahlWahlMoeglichkeiten; i++) {
		cout << "Option Nr. " << i + 1 << endl;
	}

	//zeigt die ergebnis an
	cout << "\nErgebnis gewonnen hat Option Nr. "<< this->mehrheitsentscheid() << endl;
	for (int i = 0; i < this->anzahlWahlMoeglichkeiten; i++) {
		cout << "Option Nr. "<< i+1 << " wurde " << this->wahlen[i] << " gewaehlt."<< endl;
	}
}

int Votum::mehrheitsentscheid() {
	int wahl = 0;
	int gewinner = 0;

	for (int i = 0; i < this->anzahlWahlMoeglichkeiten; i++){
		if (this->wahlen[i] > wahl){
			wahl = this->wahlen[i];
			gewinner = i + 1;
		}
	}
	return gewinner;
}
