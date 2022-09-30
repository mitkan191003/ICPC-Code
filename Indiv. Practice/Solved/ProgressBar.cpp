#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/71/B
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, k, t;
    cin >> n >> k >> t;
    float prod;
    prod = (t / 100.0) * n * k;
    prod = floor(prod);
    for (int i = 0; i < n; i++) {
        if (prod < k) {
            cout << prod << " ";
            prod = 0;
        }
        else if (prod == 0) {
            cout << 0 << " ";
        }
        else {
            cout << k << " ";
            prod = prod - k;
        }
    }
    cout << endl;

	return 0;
}