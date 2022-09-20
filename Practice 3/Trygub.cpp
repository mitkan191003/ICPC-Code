#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
const string trygub = "trygub";

bool check(string& input, int length) {
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (input[i] == trygub[j]) {
            j++;
            if (j >= trygub.length()) {
                return true;
            }
        }
    }
    return false;
}

// string scramble(string input, int length) {
//     string scrambled;
//     if (length %  2 == 0) {
//         length--;
//         // scrambled.push_back(input[length - 1]);
//     }
//     for (int i = 0; i < length; i++) {
//         if (i % 2 == 0) {
//             scrambled.push_back(input[i / 2]);
//         }
//         else {
//             scrambled.push_back(input[(length - i) /2 ]);
//         }
//     }
//     return scrambled;
// }

string scramble(string input, int length) {
    string scrambled = input;
    int frontNum = 0, backNum = length - 1;
    
    for (int i = 0; i < length; i++) {
        if (input[i] == 't') {
            scrambled[backNum] = 't';
            backNum--;
        }
        else {
            scrambled[frontNum] = input[i];
            frontNum++;
        }
    }
    return scrambled;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases, length;
    string input;
    bool contains;

    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> length;
        cin >> input;
        contains = check(input, length);

        if (contains) {
            reverse(input.begin(), input.end());
            while (check(input, length)) {
                input = scramble(input, length);
            }
            cout << input << endl;
        }
        else {
            cout << input << endl;
        }
    }

	return 0;
}