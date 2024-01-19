#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int cases;
    cin >> cases;
    while (cases--) {
        int numconstraints, rule, x;
        int max1 = 1;
        int min2 = (int)1e9;
        vector<int> arr;
        cin >> numconstraints;
        while (numconstraints--) {
            cin >> rule >> x;
            if (rule == 1) {
                if (x > max1) {
                    max1 = x;
                }
            }
            else if (rule == 2) {
                if (x < min2) {
                    min2 = x;
                }
            }
            else {
                arr.push_back(x);
            }
        }
        int inrange = min2 - max1 + 1;
        if (inrange < 1) {
            cout << 0 << "\n";
            continue;
        }
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= max1 && arr[i] <= min2) {
                inrange--;
            }
        }
        cout << inrange << "\n";
    }

    return 0;
}