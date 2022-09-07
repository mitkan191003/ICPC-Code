#include <bits/stdc++.h>
using namespace std;

int main(){
    int numTests;
    cin >> numTests;

    long numBricks;
    int numSteps = 0;
    int lastNumSteps = 0;
    for (int i = 0; i < numTests; i++) {
        cin >> numBricks;
        while (numBricks > 0) {
            lastNumSteps = numSteps;
            numBricks = numBricks - (numSteps + 1);
            numSteps++;
        }
        if (numBricks < 0) {
            cout << lastNumSteps << endl;
        }
        else {
            cout << numSteps << endl;
        }
    }

}