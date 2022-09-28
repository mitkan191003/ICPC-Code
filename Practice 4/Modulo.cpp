#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int length;
    cin >> length;
    vector<int> vec;
    vector<int> mods;
    int input;

    for (int i = 0; i < length; i++) {
        cin >> input;
        vec.push_back(input);
    }
    sort(vec.begin(), vec.end());
    int x;
    cin >> x;
    int maxmod = 0;
    for (int i = 0; i < length; i++) {
        mods.push_back(x % vec[i]);
        cout << mods.at(i) << " ";
        if (maxmod < mods[i] && mods[i] < vec[0]) {
            maxmod = mods[i];
        }
    }
    cout << endl << maxmod << endl;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (mods[j] % vec[0] > maxmod) {   // x % vec[i] >= (x % vec[i]) % vec[0]
                maxmod = mods[j] % vec[i];
            }
        }
    }
    cout << maxmod << endl;



	return 0;
}