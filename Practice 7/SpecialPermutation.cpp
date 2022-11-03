// #pragma GCC optimize ("O3")
// #pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

vector<int> answer;

// 3 2 3 2 3
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases, n, num, counter;
    vector<int> gaps = {3, -2, 3, -2, 3};
    cin >> cases;
    while (cases--) {
        cin >> n;
        num = 1;
        counter = 0;

        if (n < 4) {
            cout << -1;
        }
        else if (n == 4) {
            cout << "3 1 4 2 ";
        }
        else {
            for (int i = 0; i < n; i++) {
                cout << num << " ";
                num = num + gaps[i % 5];
            }
        }
        cout << endl;
    }

	return 0;
}