#pragma once
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

	friend ostream& operator<<(ostream& os, const Mehrheitsentscheid& mt);
private:
	int anzahlWahlMoeglichkeiten;
	int* wahlen;
	int gewinner;

	map<string, string> benutzerZugangsDaten;
	map<string, bool> wahlAbgabe;
};

