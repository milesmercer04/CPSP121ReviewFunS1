#include "myfuncs.h"

// This is a REALLY important comment

void fillVector(vector<int>& vec)
{
    int num;

    for (int i = 0; i < 5; i++) {
        cout << "Enter an int: ";
        cin >> num;
        vec.push_back(num);
    }
}

void findMinMax(vector<int>& vec, int &min, int &max)
{
    if (vec.empty()) {
        exit(-1);
    }

    min = vec.at(0);
    for (int i = 0; i < vec.size(); i++) {
        if (vec.at(i) < min) {
            min = vec.at(i);
        }
    }

    max = vec.back();
    for (int i = 0; i < vec.size(); i++) {
        if (vec.at(i) > max) {
            max = vec.at(i);
        }
    }
}