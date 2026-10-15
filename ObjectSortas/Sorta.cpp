#include "Sorta.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Sorta::Sorta(vector<int>& V) : v(V) {}

Sorta::Sorta(vector<int>& V)
{
	v = V;
}

void Sorta::randomize(int seed)
{
	for (int i = 0; i < v.size() - 1; i++)
	{
		v[i] = rand() % seed;
	}
}

void Sorta::algoSort()
{
	sort(v.begin(), v.end());
}

void Sorta::bubbleSort()
{
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = 0; j < v.size() - 1; j++)
		{
			if (v[j] > v[j + 1])
			{
				swap(v[j], v[j + 1]);
			}
		}
	}
}

void Sorta::merge(int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    vector<int> L(n1), R(n2);

    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
    {
        L[i] = v[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = v[mid + 1 + j];
    }

    int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back 
    // into arr[left..right]
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) 
        {
            v[k] = L[i];
            i++;
        }
        else 
        {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], 
    // if there are any
    while (i < n1) 
    {
        v[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void Sorta::mergeSort(int left, int right)
{
	if (left >= right)
	{
		return;
	}

	int mid = left + (right - left) / 2;
	mergeSort(left, mid);
	mergeSort(mid + 1, right);
    merge(left, mid, right);
}

void Sorta::otp()
{
	for (auto i : v)
	{
		cout << i << " ";
	}

	cout << endl;
}