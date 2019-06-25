#ifndef MEHRHEITSENTSCHEID_H
#define MEHRHEITSENTSCHEID_H
#include <iostream>
#include <map>
using namespace std;

class Mehrheitsentscheid
{
public:
	Mehrheitsentscheid(int anzahlWahlMoeglichkeiten);
	~Mehrheitsentscheid();

	void benutzerAnlegen(string name, string password);
	void waehlen(string name, string password, int wahlnummer);
	int wahlAuswertung();

	friend ostream& operator<<(ostream& os, const Mehrheitsentscheid& mt); // überladung
private:
	int anzahlWahlMoeglichkeiten;
	int* wahlen;
	int gewinner;//this->gewinner

	map<string, string> benutzerZugangsDaten;
	map<string, bool> wahlAbgabe;// ob die person schon abgestimmt hat, damit doppelabstimmung nicht mögl. ist
};

#endif // MEHRHEITSENTSCHEID_H
