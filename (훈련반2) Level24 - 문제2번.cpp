#include <iostream>
using namespace std;

int main()
{
    int* simData[5];

    int a, b, c, d, e;
    simData[0] = &a;
    simData[1] = &b;
    simData[2] = &c;
    simData[3] = &d;
    simData[4] = &e;

    int max = -9999;
    int min = 9999;
    for (int i = 0; i < 5; i++)
    {
        cin >> *simData[i];

        if (*simData[i] > max) max = *simData[i];
        if (*simData[i] < min) min = *simData[i];
    }

    cout << "MAX:" << max << endl;
    cout << "MIN:" << min;


    return 0;
}