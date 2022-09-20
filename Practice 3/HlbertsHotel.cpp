#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
vector<int> generate(int length) {
    vector<int> list;
    for (int i = 0 - length; i < length * length; i++) {
        list.push_back(i);
    }
    return list;
}

void print(vector<int> vector) {
    cout << "[";
    for (int i = 0; i < vector.size() - 1; i++) {
        cout << vector.at(i) << ", ";
    }
    cout << vector.at(vector.size() - 1) << "]" << endl;
}

void shift(vector<int> &rooms, vector<int> &shifts) {
    for (int i = 0; i < rooms.size(); i++) {
        rooms.at(i) = rooms.at(i) + shifts.at(i % shifts.size());
    }
}

bool dupe(vector<int> &rooms) {
    bool dupe = false;
    sort(rooms.begin(), rooms.end());
    for (int i = 0; i < rooms.size() - 1; i++) {
        if (rooms.at(i) == rooms.at(i + 1)) {
            dupe = true;
        }
    }
    return dupe;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases, length;

    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> length;
        vector<int> shifts;
        vector<int> rooms;

        rooms = generate(length);
        for (int j = 0; j < length; j++) {
            int next;
            cin >> next;
            shifts.push_back(next);
        }
        shift(rooms, shifts);
        if (dupe(rooms)) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

	return 0;
}