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
    /*
    cout << "Afugabe 1 \n ------------------" << endl;
	int arrayGroesseEingabe = 3;
	cout << "Array groesse angeben (Minimum 3) ?\n";
	cin >> arrayGroesseEingabe;

	Median median(arrayGroesseEingabe);
	median.addNumbers();

	median.showArray();
	int medialWert = median.getMedian();
	median.showArray();

	cout << "Medial wert ist " << medialWert << endl;
	*/

	//---------------------------------------------------------------------------------------------------------------
	//Aufgabe 2 = Entwickeln Sie eine Klassendefinition, welche einen Mehrheitsentscheid (Votum) durchführen kann.
	//---------------------------------------------------------------------------------------------------------------
    /*
    cout << "Afugabe 2 \n ------------------" << endl;
	Votum wahlen(2);

            //Manuelle wahl
            //int waehler = 5;
            //int wahlEingabe;
            //for(int i = 0; i < waehler; i++)
            //{
            //    cout << "Bitte Waehle Option 1 oder 2" << endl;
            //    cin >> wahlEingabe;
            //    wahlen.waehlen(wahlEingabe);
            //}

    wahlen.waehlen(1);
	wahlen.waehlen(2);
	wahlen.waehlen(2);

	wahlen.wahlErgebnis();
    */

	//---------------------------------------------------------------------------------------------------------------
	//Aufgabe 3 = Entwickeln Sie eine Klassendefinition, welche einen Mehrheitsentscheid (Votum) durchführen kann.
	//---------------------------------------------------------------------------------------------------------------

    cout << "Afugabe 3 \n ------------------" << endl;
	Mehrheitsentscheid abstimmungen(2);

	abstimmungen.benutzerAnlegen("Angela Merkel", "Bundeskanzlerin");
	abstimmungen.benutzerAnlegen("Ursula von der Leyen", "Ministerin fuer Arbeit");
	abstimmungen.benutzerAnlegen("Kristina Schroeder", "Ministerin fuer Familie");
	abstimmungen.benutzerAnlegen("Ilse Aigner", "Ministerin fuer Ernaehrung");
	abstimmungen.benutzerAnlegen("Sabine Leutheusser-Schnarrenberger", "Ministerin der Justiz");
	abstimmungen.benutzerAnlegen("Anette Schavan", "Ministerin fuer Bildung");

	abstimmungen.waehlen("Angela Merkel", "Bundeskanzlerin", 1);
	abstimmungen.waehlen("Ursula von der Leyen", "Ministerin fuer Arbeit", 2);
	abstimmungen.waehlen("Angela Merkel", "Doppelgaengerin", 2);
	abstimmungen.waehlen("Kristina Schroeder", "Ministerin fuer Familie", 2);
	abstimmungen.waehlen("Ilse Aigner", "Ministerin fuer Essen", 1);
	abstimmungen.waehlen("Angela Merkel", "Bundeskanzlerin", 1);
	abstimmungen.waehlen("Anette Schavan", "Ministerin fuer Bildung", 2);
	abstimmungen.waehlen("Sabine Leutheusser-Schnarrenberger", "Ministerin der Justiz", 3);
	abstimmungen.waehlen("Hannelore Kraft", "Ministerpräsidentin", 1);
	abstimmungen.wahlAuswertung();

	// Mehrheitsentscheid Klasse ist << Operator überladen
	cout << "Die Wahlen sind zu ende \n" << abstimmungen << endl;


	// ende
	return 0;
}
