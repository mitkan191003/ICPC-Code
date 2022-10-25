#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

void print(map<int, pair<int, int>> envs) {
    for(auto it = envs.cbegin(); it != envs.cend(); ++it) {
        std::cout << it->first << " " << it->second.first << " " << it->second.second << "\n";
    }
}

bool SortWidth(map<int, pair<int, int>> &a, map<int, pair<int, int>> &b) {
    map<int, pair<int, int>> *a_ref;
    map<int, pair<int, int>> *b_ref;
    map<int, pair<int, int>>::iterator ita = a.begin();
    map<int, pair<int, int>>::iterator itb = b.begin();
    a_ref = &a;
    b_ref = &b;
    return ita->second.first < itb->second.first;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int numE, cW, cH;
    int eW, eH;
    map<int, pair<int, int>> envs;

    cin >> numE >> cW >> cH;
    for (int i = 1; i <= numE; i++) {
        cin >> eW >> eH;
        envs.emplace(i, make_pair(eW, eH));
    }

    print(envs);
    
    sort(envs.begin(), envs.end(), SortWidth);

    print(envs);

	return 0;
}