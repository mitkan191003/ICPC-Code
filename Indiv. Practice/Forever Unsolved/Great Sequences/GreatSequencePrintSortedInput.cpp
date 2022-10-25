// #pragma GCC optimize ("O3")
// #pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1607/D

int findidx(vector<int>& vec, int val) {
	vector<int>::iterator idx;
	idx = find(vec.begin(), vec.end(), val);
	if (idx != vec.end()) {
		return idx - vec.begin();
	}
	else {
		return -1;
	}
}

void print(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ifstream infile("GreatSequencesGeneratedInputs.txt");
	if (infile.is_open()) {
    	cin.rdbuf(infile.rdbuf());
	}

	int cases, length, x, input, idx;
	vector<int> vec;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> length >> x;
        for (int i = 0; i < length; i++) {
            cin >> input;
            vec.push_back(input);
        }
		sort(vec.begin(), vec.end());
		print(vec);
		cout << endl;
		for (int i = 0; i < vec.size(); i++) {
			if (findidx(vec, vec[i] * x) != -1) {
				cout << i << " " << i * x << endl;
			}
		}
	}
	return vec.size();
	// return 0;
}