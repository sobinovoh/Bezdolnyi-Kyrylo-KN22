#include <iostream>
#include <cmath>
#include "ModulesBezdolny.h"

#define ARRAY_SIZE 7

using namespace std;

int main() {
    const float x[ARRAY_SIZE] = {-6, 2, 4,   1, -3,   2,  -0.4};
    const float y[ARRAY_SIZE] = {-2, 8, 0.8, 3, 16,   11, 12};
    const float z[ARRAY_SIZE] = {2,  1, 3.2, 3, 16.4, 1,  6.4};
    const float expectedResult[ARRAY_SIZE] = {-19.1509, 3.5651, -6.8708, -0.0846, 28.6537, 10.5001, 15.0646};

    for (short int i = 0; i < ARRAY_SIZE; i++) {
        const float currentReasult = round(s_calculation(x[i], y[i], z[i])*10000) / 10000;
        if (currentReasult == expectedResult[i])
            cout << "Test #" << i+1 << " - PASSED\n";
        else
            cout << "Test #" << i+1 << " - FAILED\n";
    }
}

