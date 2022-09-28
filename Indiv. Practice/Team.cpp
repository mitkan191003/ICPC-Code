#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int> vec = {0, 0, 0};
	int cases;
    int input;
    int solvable = 0;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		for (int j = 0; j < 3; j++) {
            cin >> input;
            vec.at(j) = input;
        }
        if (accumulate(vec.begin(), vec.end(), 0) >= 2) {
            solvable++;
        }
	}
    cout << solvable << endl;

	return 0;
}