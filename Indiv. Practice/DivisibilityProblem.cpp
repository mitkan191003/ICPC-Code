#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases, a, b;

    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> a >> b;
        if (a % b) {
            cout << b - (a % b) << endl;
        }
        else {
            cout << 0 << endl;
        }
    }

	return 0;
}