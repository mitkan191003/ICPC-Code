#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string word;
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> word;
		if (word.length() > 10) {
			cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
		}
		else {
			cout << word << endl;
		}
	}

	return 0;
}