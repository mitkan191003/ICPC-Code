#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int length;
    vector<int> nums;
    cin >> length;
    int input;
    int even = 0, odd = 0;
    for (int i = 0; i < length; i++) {
        cin >> input;
        nums.push_back(input);
        if (input % 2) {
            odd++;
        }
        else {
            even++;
        }
    }

    for(int i = 0; i < length; i++) {
        if (odd == 1) {
            if (nums[i] % 2) {
                cout << i + 1 << endl;
                break;
            }
        } 
        else {
            if (nums[i] % 2 == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    }




	return 0;
}