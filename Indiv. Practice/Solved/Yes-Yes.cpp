#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1759/A

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string yes = "";
    for (int i = 0; i < 50; i++) {
        yes = yes + "Yes";
    }

    int cases;
    string in;
    cin >> cases;
    while (cases--) {
        cin >> in;
        if (yes.find(in) == string::npos) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}