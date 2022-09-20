//#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases, columns;
    string a, b;
    bool possible;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> columns >> a >> b;
        possible = true;
        for (int j = 0; j < columns; j++) {
            if (a[j] == b[j] & a[j] == '1') {
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