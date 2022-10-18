#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int thresh, numSkit;
    vector<int> skittles;
    cin >> thresh >> numSkit;
    string line;
    getline(cin, line);
    getline(cin, line);
    string num = "";

    for (int i = 0; i < line.length(); i++) {
        if (line[i] != ' ') {
            num = num + line[i];
        } else {
            skittles.push_back(stoi(num));
            num = "";
        }
    }
    skittles.push_back(stoi(num));

    sort(skittles.begin(), skittles.end());
    int added = 0;
    vector<int>::iterator idx;
    do {
        idx = find(skittles.begin(), skittles.end(), thresh + added);
        added++;
    } while (idx == skittles.end() && thresh + added <= skittles[skittles.size() - 1]);
    int index, eaten = 0;
    int sum = 0;
    if (idx != skittles.end()) {
        index = idx - skittles.begin();

        while (index < skittles.size() && eaten < numSkit) {
            sum += skittles[index];
            index++;
            eaten++;
        }
        cout << sum << endl;
    } else {
        cout << 0 << endl;
    }



	return 0;
}