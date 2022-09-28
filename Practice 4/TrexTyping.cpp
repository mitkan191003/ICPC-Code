#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
pair<int, int> findLetter(char letter, vector<vector<char>> keyboard) {
    for (int j = 0; j < 3; j++) { 
        for (int i = 0; i < keyboard[j].size(); i++) {
            if (keyboard[j][i] == letter) {
                return make_pair(j, i);
            }
        }
    }
    return {0, 0};
}

int distance(pair<int, int> finger, pair<int, int> key) {
    return abs(finger.first - key.first) + abs(finger.second - key.second);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    vector<vector<char>> keyboard;
    keyboard.push_back({'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'});
    keyboard.push_back({'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'});
    keyboard.push_back({'z', 'x', 'c', 'v', 'b', 'n', 'm'});

    string input;
    getline(cin, input);
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    int cost = 0;
    pair<int, int> finger1, finger2;
    finger1 = findLetter(input[0], keyboard);
    finger2 = findLetter(input[1], keyboard);
    pair<int, int> key;
    int f1dist;
    int f2dist;
    int minCost;


    for (int i = 2; i < input.length(); i++) {
        key = findLetter(input[i], keyboard);
        f1dist = distance(finger1, key);
        f2dist = distance(finger2, key);
        if (f1dist < f2dist) {
            finger1 = key;
            cost = cost + f1dist;
        }
        else {
            finger2 = key;
            cost = cost + f2dist;
        }
    }

    cout << cost << endl;

	return 0;
}