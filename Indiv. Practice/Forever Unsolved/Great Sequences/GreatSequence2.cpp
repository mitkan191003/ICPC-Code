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
		// vector<int> vec;
		for (int j = 0; j < length; j++) {
			cin >> input;
			if (input % 2 == 0) {
            	idx = findidx(vec, input / x);
			}
			else {
				idx = -1;
			}

            if (idx != -1) {
                vec.erase(vec.begin() + idx);
            }
            else {
                idx = findidx(vec, input * x);
                if (idx != -1) {
                    vec.erase(vec.begin() + idx);
                }
                else {
			        vec.push_back(input);
                }
            }
        }
		cout << vec.size() << endl;
		// sort(vec.begin(), vec.end());
		print(vec);
		cout << endl;
		for (int i = 0; i < vec.size(); i++) {
			if (findidx(vec, vec[i] * 2) != -1) {
				cout << i << " " << i * 2 << endl;
			}
		}
	}
	return vec.size();
	// return 0;
}