#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    vector<string> db;

    int cases, append = 0;
    string name;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> name;
        append = 1;
        if (!count(db.begin(), db.end(), name)) {
            cout << "OK" << endl;
            db.push_back(name);
        }
        else {
            while (count(db.begin(), db.end(), name + to_string(append))) {
                append++;
            }
            cout << name + to_string(append) << endl;
            db.push_back(name + to_string(append));
        }
    }

	return 0;
}