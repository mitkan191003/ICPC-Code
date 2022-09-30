#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    map<string, int> db;
    map<string, int>::iterator pos;

    int cases, append = 0;
    string name;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> name;
        pos = db.find(name);
        if (pos == db.end()) {
            cout << "OK" << endl;
            db.insert({name, 1});
        }
        else {
            cout << pos->first << pos->second << endl;
            pos->second++;
        }
    }

	return 0;
}