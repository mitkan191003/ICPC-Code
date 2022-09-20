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
        while (numBricks >= numSteps + 1) {
            numBricks = numBricks - (numSteps + 1);
            numSteps++;
        }
        cout << numSteps << endl;
    }

}