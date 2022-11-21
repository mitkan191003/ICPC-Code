#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1759/B

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int cases, m, s, num, sum;
    vector<int> b;

    cin >> cases;
    while (cases--) {
        b.clear();
        sum = 0;
        cin >> m >> s;
        for (int i = 0; i < m; i++) {
            cin >> num;
            b.push_back(num);
        }

        num = 1;
        while (sum < s || num < *max_element(b.begin(), b.end())) {
            if (find(b.begin(), b.end(), num) == b.end()) {
                sum = sum + num;
            }
            num++;
        }
        if (sum == s) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}