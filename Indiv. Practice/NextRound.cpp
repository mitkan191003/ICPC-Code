#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int partic;
    int input;
    int k;
    int more = 0;
    vector<int> scores;
    cin >> partic >> k;
    for (int i = 0; i < partic; i++) {
        cin >> input;
        scores.push_back(input);
    }
    for (int i = 0; i < partic; i++) {
        if (scores.at(i) >= scores.at(k - 1) && scores.at(i) > 0) {
            more++;
        }
    }

    cout << more << endl;

	return 0;
}