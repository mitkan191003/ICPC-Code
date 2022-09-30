#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases, len, num;
    int loop, sum;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        loop = 1;
        sum = 1;
        cin >> len >> num;
        string str(len, 'a');

        if (num == 1) {
            str[str.size() - 1] = 'b';
            str[str.size() - 2] = 'b';

        }
        else {
            while (sum <= num - loop) {
                sum = sum + loop++;
                // cout << sum << endl;
            }
            // cout << loop << " " << sum << endl;
            str[str.size() - (loop + 1)] = 'b';
            str[str.size() - ((num - sum) + 1)] = 'b';
        }
        cout << str << endl;
    }


	return 0;
}