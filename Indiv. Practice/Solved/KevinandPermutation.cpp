#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases, idx;
    int length;
    cin >> cases;
    while (cases--) {
        cin >> length;
        int mid = ((length / 2) + length % 2);
        int end = length;
        idx = mid;
        if (length % 2) {
            idx--;
        }
        for (int i = 0; i < idx; i++) {
            cout << mid - i << " " << end - i << " ";
        }
        if (length % 2) {
            cout << 1;
        }
        cout << endl;
    }

	return 0;
}