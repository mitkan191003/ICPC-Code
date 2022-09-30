#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string command;
    int cases;
    int x = 0;
    cin >> cases;
    getline(cin, command);
    for (int i = 0; i < cases; i++) {
        getline(cin, command);
        if (command.find('+') != -1) {
            x++;
        }
        else {
            x--;
        }
    }
    cout << x << endl;

	return 0;
}