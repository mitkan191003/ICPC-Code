#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases, n, k;
    int input;
    bool has1 = false;
    cin >> cases;
    while (cases--) {
        has1 = false;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> input;
            if (input) {
                has1 = true;
            }
        }
        if (has1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

	return 0;
}