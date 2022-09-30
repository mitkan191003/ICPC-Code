#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int h, w, a;
    unsigned long long ha, wa;
    cin >> h >> w >> a;
    if (h % a != 0) {
        ha = (h / a) + 1;
    }
    else {
        ha = h / a;
    }
    if (w % a != 0) {
        wa = (w / a) + 1;
    }
    else {
        wa = w / a;
    }
    cout << wa * ha << endl;

	return 0;
}