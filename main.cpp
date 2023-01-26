#include "myfuncs.h"

int main()
{
    vector<int> userNums;
    
    fillVector(userNums);
    cout << "Size: " << userNums.size() << endl;

    // Task 1: Define and call a function to find and return the min and max
    //         number in the vector
    int min, max;
    findMinMax(userNums, min, max);

    cout << endl << "Max Value: " << max << endl;
    cout << "Min Value: " << min << endl;
    
    // Task 2: Convert this to the 3 file format
    // DONE!
    
    return 0;
}