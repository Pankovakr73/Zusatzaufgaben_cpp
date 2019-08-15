#ifndef VOTUM_H
#define VOTUM_H

#include <iostream>
using namespace std;

class Votum
{
public:
	Votum(int anzahlWahlMoeglichkeiten);
	~Votum();

	void waehlen(int wahlnummer);
	void wahlErgebnis();

private:
	int anzahlWahlMoeglichkeiten;
	int* wahlen;

	int mehrheitsentscheid();
};
#endif // VOTUM_H
