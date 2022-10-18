#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int days;
    vector<int> layers;
    int currCake = 0;
    int numCakes = 0;

    cin >> days;
    int layer;
    for (int i = 0; i < days; i++) {
        cin >> layer;
        layers.push_back(layer);
    }

    do {
        currCake = 0;
        for (int i = 0; i < layers.size(); i++) {
            if (layers[i] == currCake + 1) {
                currCake++;
                layers.erase(layers.begin() + i);
                i--;
            }
            if (currCake == 5) {
                numCakes++;
                break;
            }
        }
    } while (currCake == 5);

    cout << numCakes << endl;

	return 0;
}