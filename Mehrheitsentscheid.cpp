#include "Mehrheitsentscheid.h"

Mehrheitsentscheid::Mehrheitsentscheid(int anzahlWahlMoeglichkeiten) {
	this->wahlen = new int[this->anzahlWahlMoeglichkeiten = anzahlWahlMoeglichkeiten]{ 0 };
}


Mehrheitsentscheid::~Mehrheitsentscheid() {
	delete[] wahlen;
}

void Mehrheitsentscheid::benutzerAnlegen(string name, string password)
{
	if (benutzerZugangsDaten.find(name) == benutzerZugangsDaten.end()){
		benutzerZugangsDaten[name] = password; // benutzer anlegen wenn nocht in vorhanden ist
		wahlAbgabe[name] = false;
	}
}


void Mehrheitsentscheid::waehlen(string name, string password, int wahlnummer)
{
	if ( !(benutzerZugangsDaten.find(name) == benutzerZugangsDaten.end()) && benutzerZugangsDaten[name] == password){
		if (wahlAbgabe[name] == false && wahlnummer <= this->anzahlWahlMoeglichkeiten){
			wahlAbgabe[name] = true;
			this->wahlen[wahlnummer - 1]++;
		}
	}
}

int Mehrheitsentscheid::wahlAuswertung() {
	int wahl = 0;
	int gewinner = 0;

	for (int i = 0; i < this->anzahlWahlMoeglichkeiten; i++) {
		if (this->wahlen[i] > wahl) {
			wahl = this->wahlen[i];
			gewinner = i + 1;
		}
	}
	this->gewinner = gewinner;
	return gewinner;
}

ostream& operator<<(ostream& os, const Mehrheitsentscheid& mt)
{
	os << "Ergebnis des Mehrheitsentscheid Gewinner der Wahl ist Option Nr. " << mt.gewinner;
	return os;
}
