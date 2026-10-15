#ifndef SORTOWANIE_H
#define SORTOWANIE_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Sorta
{
private:
	vector<int> v;
	void merge(int left, int mid, int right);

public:
	Sorta(vector<int>& V);

	void randomize(int seed);

	void algoSort();
	void bubbleSort();
	void mergeSort(int left, int right);

	void otp();
};

#endif