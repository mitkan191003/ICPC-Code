#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases;
    string in;
    cin >> cases;
    while (cases--) {
        int lets = 0;
        int length;
        cin >> length;
        cin >> in;
        for (int i = 0; i < length; i++) {
            if (in.at(i) == 'Q') {
                lets++;
            } else {
                if (lets > 0) {
                    lets--;
                }
            }
        }
        if (lets > 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

	return 0;
}