#include "Mehrheitsentscheid.h"

Mehrheitsentscheid::Mehrheitsentscheid(int anzahlWahlMoeglichkeiten) {
	this->wahlen = new int[this->anzahlWahlMoeglichkeiten = anzahlWahlMoeglichkeiten]{ 0 };
}


Mehrheitsentscheid::~Mehrheitsentscheid() {
	delete[] wahlen;
}

void Mehrheitsentscheid::benutzerAnlegen(string name, string password)
{
    // benutzer anlegen wenn nocht in vorhanden ist
	if (benutzerZugangsDaten.find(name) == benutzerZugangsDaten.end()){
		benutzerZugangsDaten[name] = password;
		wahlAbgabe[name] = false;//jeder neuer Benutzer wird als false angelegt, da er noch nicht abgestimmt hat
	}
}


void Mehrheitsentscheid::waehlen(string name, string password, int wahlnummer)
{
	if ( !(benutzerZugangsDaten.find(name) == benutzerZugangsDaten.end()) && benutzerZugangsDaten[name] == password){
		if (wahlAbgabe[name] == false && wahlnummer != 0 && wahlnummer <= this->anzahlWahlMoeglichkeiten){
			wahlAbgabe[name] = true;
			this->wahlen[wahlnummer - 1]++;
		}
	}
}

int Mehrheitsentscheid::wahlAuswertung() {
	int wahl = 0;
	int tmpGewinner = 0;

	for (int i = 0; i < this->anzahlWahlMoeglichkeiten; i++) {
		if (this->wahlen[i] > wahl) {
			wahl = this->wahlen[i];
			tmpGewinner = i + 1;
		}
	}
	this->gewinner = tmpGewinner;//gewinner wird gespeichert
	return tmpGewinner;
}

ostream& operator<<(ostream& os, const Mehrheitsentscheid& mt)
{
	os << "Ergebnis des Mehrheitsentscheid Gewinner der Wahl ist Option Nr. " << mt.gewinner;
	return os;
}
