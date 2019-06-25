#ifndef MEDIAN_H_INCLUDED
#define MEDIAN_H_INCLUDED
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
#endif // MEDIAN_H_INCLUDED
