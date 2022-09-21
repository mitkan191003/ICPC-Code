//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
bool evenHalf(int weight) { // After submitting, I now realize that i could just check
    for (int i = 1; i < weight; i++) {  // that weight > 2.
        if (i % 2 == 0 && (weight - i) % 2 == 0) {
            return true;
        }
    }
    return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int weight;

    cin >> weight;
    if (weight % 2 == 0 && evenHalf(weight)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

	return 0;
}