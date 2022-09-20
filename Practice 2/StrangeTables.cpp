#include <bits/stdc++.h>
using namespace std;

int main(){
    
    unsigned long cases;
    unsigned long long n, m, cellNum, row, column;
    unsigned long long newNum;
    cin >> cases;

    for (unsigned long i = 0; i < cases; i++) {
        cin >> n;
        cin >> m;
        cin >> cellNum;
        if (cellNum % n == 0 && n != 1) {
            column = (cellNum / n);
        }
        else {
            column = (cellNum / n) + 1;
        }
        row = cellNum - ((column - 1) * n);
        
        newNum = ((row - 1) * m) + column;
        cout << newNum;
    }

}