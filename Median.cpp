#include "Median.h"

Median::Median(int size)
{
	this->numbers = new int[size];
	this->arraySize = size;
}

Median::~Median(){
	delete[] numbers;
}

void Median::addNumbers() {
	int eingabeZahl;
	for (int i = 0; i < this->arraySize; i++)
	{
		cout << "Bitte ihre Zahlen eingeben, die " << i + 1 << " von (" << this->arraySize << ")\n";
		cin >> eingabeZahl;
		this->numbers[i] = eingabeZahl;
	}
}

int Median::getMedian() {
	this->sort();
	if (this->arraySize % 2 == 0) {
		// in der Aufgabe ist bei geraden Arrays nichts definiert!
		return numbers[this->arraySize / 2];
	}
	else {
		return numbers[this->arraySize / 2];
	}
}

void Median::showArray() {
	cout << "Array Inhalt [";
	for (int i = 0; i < this->arraySize; i++) {
		cout << this->numbers[i] << ", ";
	}
	cout << "]\n";
}


void Median::sort() {
	int temp, i, j;
	for (i = 0; i < this->arraySize - 1; i++) {
		for (j = i + 1; j < this->arraySize; j++) {
			if (numbers[j] < numbers[i]) {// zahlen elemente austauschen nach groesse
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
}
