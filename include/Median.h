#ifndef MEDIAN_H
#define MEDIAN_H

#include <iostream>
using namespace std;

class Median
{
private:
	int* numbers;
	int arraySize;

public:
	Median(int size);
	~Median();

	void addNumbers();
	int getMedian();
	void showArray();

private:
	void sort();
};

#endif // MEDIAN_H
