// #pragma GCC optimize ("O3")
// #pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
void print(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases;
    vector<int> gaps;
    cin >> cases;
    while (cases--) {
        gaps = {};
        int length;
        cin >> length;
        char curr;
        cin >> curr;
        string in;
        cin >> in;
        int increment = 0;
        bool started = false;
        in = in + in;

        for (int i = 0; i < in.length(); i++) {
            if (in[i] == curr) {
                increment++;
                started = true;
            } else if (started) {
                if (in[i] == 'g') {
                    gaps.push_back(increment);
                    started = false;
                    increment = 0;
                } else {
                    increment++;
                }
            }
        }
        int max = -1;
        for (int i = 0; i < gaps.size(); i++) {
            if (gaps[i] > max) {
                max = gaps[i];
            }
        }
        if (max == -1) {
            cout << 0 << endl;
        } else {
            cout << max << endl;
        }
    }

	return 0;
}