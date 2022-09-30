#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int h, w;
    cin >> h >> w;
    int prod = h * w;
    prod = prod - (prod % 2);
    cout << prod / 2 << endl;

	return 0;
}