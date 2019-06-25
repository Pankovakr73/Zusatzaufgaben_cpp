#include <iostream>
#include "Median.h"
#include "Votum.h"
#include "Mehrheitsentscheid.h"
using namespace std;

int main()
{
	//---------------------------------------------------------------------------------------------------------------
	// Aufgabe 1 =
	//---------------------------------------------------------------------------------------------------------------

	int arrayGroesseEingabe = 3;
	cout << "Array groesse angeben (Minimum 3) ?\n";
	cin >> arrayGroesseEingabe;

	Median median(arrayGroesseEingabe);
	median.addNumbers();

	median.showArray();
	int medialWert = median.getMedian();
	median.showArray();

	cout << "Medial wert ist " << medialWert;
	cin >> medialWert;


	//---------------------------------------------------------------------------------------------------------------
	//Aufgabe 2 = Entwickeln Sie eine Klassendefinition, welche einen Mehrheitsentscheid (Votum) durchführen kann.
	//---------------------------------------------------------------------------------------------------------------
	/*
	Votum wahlen(2);

	wahlen.waehlen(0);
	wahlen.waehlen(1);
	wahlen.waehlen(1);

	wahlen.wahlErgebnis();
	*/

	//---------------------------------------------------------------------------------------------------------------
	//Aufgabe 3 = Entwickeln Sie eine Klassendefinition, welche einen Mehrheitsentscheid (Votum) durchführen kann.
	//---------------------------------------------------------------------------------------------------------------
	/*
	Mehrheitsentscheid wahlen(2);

	wahlen.benutzerAnlegen("Angela Merkel", "Bundeskanzlerin");
	wahlen.benutzerAnlegen("Ursula von der Leyen", "Ministerin fuer Arbeit");
	wahlen.benutzerAnlegen("Kristina Schroeder", "Ministerin fuer Familie");
	wahlen.benutzerAnlegen("Ilse Aigner", "Ministerin fuer Ernaehrung");
	wahlen.benutzerAnlegen("Sabine Leutheusser-Schnarrenberger", "Ministerin der Justiz");
	wahlen.benutzerAnlegen("Anette Schavan", "Ministerin fuer Bildung");

	wahlen.waehlen("Angela Merkel", "Bundeskanzlerin", 1);
	wahlen.waehlen("Ursula von der Leyen", "Ministerin fuer Arbeit", 2);
	wahlen.waehlen("Angela Merkel", "Doppelgaengerin", 2);
	wahlen.waehlen("Kristina Schroeder", "Ministerin fuer Familie", 2);
	wahlen.waehlen("Ilse Aigner", "Ministerin fuer Essen", 1);
	wahlen.waehlen("Angela Merkel", "Bundeskanzlerin", 1);
	wahlen.waehlen("Anette Schavan", "Ministerin fuer Bildung", 2);
	wahlen.waehlen("Sabine Leutheusser-Schnarrenberger", "Ministerin der Justiz", 3);
	wahlen.waehlen("Hannelore Kraft", "Ministerpräsidentin", 1);
	wahlen.wahlAuswertung();

	cout << "Die Wahlen sind zu ende \n" << wahlen << endl;
	*/

	return 0;
}
