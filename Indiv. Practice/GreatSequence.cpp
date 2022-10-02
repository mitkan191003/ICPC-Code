#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ifstream infile("GreatSequencesGeneratedInputs.txt");
	if (infile.is_open()) {
    	cin.rdbuf(infile.rdbuf());
	}

	int cases, length, x, input, idx, output;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> length >> x;
		vector<int> vec;
		idx = 0;
		output = 0;
		for (int j = 0; j < length; j++) {
			cin >> input;
			vec.push_back(input);
		}
		sort(vec.begin(), vec.end());
		for (int j = 0; j < vec.size(); j++) {
			// if (length == 1) {
			// 	output++;
			// 	break;
			// }
			idx = findidx(vec, vec[j] * x);
			if (idx != -1) {
				vec.erase(vec.begin() + idx);
			}
			else {
				output++;
			}
		}
		cout << output << endl;
	}
	return output;
}