#include <bits/stdc++.h>
using namespace std;

int main(){
    long numSwords, numMonsters;
    long leftRange, rightRange;
    long numGoodSwords = 0;
    long maxLeftRange = 0, minRightRange = 0;

    cin >> numSwords >> numMonsters;

    cin >> maxLeftRange >> minRightRange;

    for (int i = 1; i < numMonsters; i++) {
        cin >> leftRange >> rightRange;
        if (leftRange > maxLeftRange) {
            maxLeftRange = leftRange;
        }
        if (rightRange < minRightRange) {
            minRightRange = rightRange;
        }
    }

    numGoodSwords = minRightRange - maxLeftRange + 1;
    if (numGoodSwords < 0) {
        numGoodSwords = 0;
    }
    cout << numGoodSwords;

}