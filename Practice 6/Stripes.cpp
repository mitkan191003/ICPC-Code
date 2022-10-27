#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

void initialize(vector<string>& vec) {
    for (int i = 0; i < 8; i++) {
        vec[i] = "";
    }
}

bool check(string str, char c) {
    bool same = true;
    for (int i = 0; i < 8; i++) {
        if (str[i] != c) {
            same = false;
        }
    }
    return same;
}

bool check2(vector<string>& strs, char c, int col) {
    string str = "";
    for (int i = 0; i < 8; i++) {
        str = str + strs[i][col];
    }
    bool same = true;
    for (int i = 0; i < 8; i++) {
        if (str[i] != c) {
            same = false;
        }
    }
    return same;
}

void print(vector<string>& grid) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases;
    vector<string> grid = {};
    string in;
    cin >> cases;
    while (cases--) {
        grid = {};
        for (int i = 0; i < 8; i++) {
            cin >> in;
            grid.push_back(in);
        }
        for (int i = 0; i < 8; i++) {
            if (check(grid[i], 'R')) {
                cout << 'R' << endl;
                break;
            }
            if (check2(grid, 'B', i)) {
                cout << 'B' << endl;
                break;
            }
        }
    }
	return 0;
}