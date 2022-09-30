#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1607/D
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int cases, length;
    cin >> cases;
    long long inNum;
    char color;
    for (int i = 0; i < cases; i++) {
        cin >> length;
        vector<pair<long long, char>> vec(length, make_pair(0, 0));
        bool possible = true;

        for (int j = 0; j < length; j++) {
            cin >> inNum;
            vec[j].first = inNum;
        }
        for (int j = 0; j < length; j++) {
            cin >> color;
            vec[j].second = color;
        }
        for (int j = 0; j < length; j++) {
            if (vec[j].first > j + 1 && vec[j].second == 'R') {
                possible = false;
            }
            if (vec[j].first < j + 1 && vec[j].second == 'B') {
                possible = false;
            }
        }
        if (possible) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

	return 0;
}