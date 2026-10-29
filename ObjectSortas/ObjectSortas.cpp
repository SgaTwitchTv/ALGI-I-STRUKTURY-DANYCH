#include <iostream>
#include <vector>
#include <algorithm>
#include "Sorta.h"
#include "Travesz.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    
    Sorta s(v);

    s.randomize(67);
    s.otp();
    
    s.algoSort();
    s.otp();

    s.randomize(69);
    s.otp();

    s.bubbleSort();
    s.otp();

    s.randomize(67);
    s.otp();

    s.mergeSort(0, n - 1);
    s.otp();

    cout << "Tera jazda z grafami" << endl;

    vector<vector<pair<int, int>>> graf;
    
    Travesz t(graf);



    return 0;
}
