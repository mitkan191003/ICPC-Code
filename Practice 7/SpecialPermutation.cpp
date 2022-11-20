// #pragma GCC optimize ("O3")
// #pragma GCC target ("sse4")
// https://codeforces.com/group/VyuYdsEvzv/contest/407622/problem/E
#include <bits/stdc++.h>
using namespace std;

vector<int> answer;

// 3 2 3 2 3
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases, n, num, counter;
    vector<int> gaps = {2, 2, -3, 2, 2};
    vector<int> gap6 = {2, 2, -3, 4, -2, 3};
    vector<int> gap7 = {2, 2, -3, 4, 2, -4, 3};
    vector<int> gap8 = {2, 2, -3, 4, 3, -2, -3, 4};
    cin >> cases;
    while (cases--) {
        cin >> n;
        num = 0;
        counter = 0;
        int initloops = n / 5;

        if (n < 4) {
            cout << -1;
        }
        else if (n == 4) {
            cout << "3 1 4 2 ";
        }
        else {
            for (int i = 0; i < initloops - 1; i++) {
                for (int j = 0; j < 5; j++) {
                    num = num + gaps[j % 5];
                    cout << num << " ";
                    counter++;
                }
            }
            if (n - counter == 6) {
                for (int i = 0; i < 6; i++) {
                    num = num + gap6[i];
                    cout << num << " ";
                }
            } else if (n - counter == 7) {
                for (int i = 0; i < 7; i++) {
                    num = num + gap7[i];
                    cout << num << " ";
                }
            } else if (n - counter == 8) {
                for (int i = 0; i < 8; i++) {
                    num = num + gap8[i];
                    cout << num << " ";
                }
            } else {
                for (int i = 0; i < n - counter; i++) {
                    num = num + gaps[i % 5];
                    cout << num << " ";
                }
            }
        }
        cout << endl;
    }

	return 0;
}