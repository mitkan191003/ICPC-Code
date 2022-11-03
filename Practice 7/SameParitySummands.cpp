// #pragma GCC optimize ("O3")
// #pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;

vector<int> answer;

bool checkEven(int sum, int num) {
    if (sum % 2 == 1) {
        return false;
    } else {
        if (sum >= 2 * num && (sum - (2 * (num - 1))) % 2 == 0) {
            for (int i = 0; i < num - 1; i++) {
                answer.push_back(2);
            }
            answer.push_back(sum - (2 * (num - 1)));
            return true;
        } else {
            return false;
        }
    }
}

bool checkOdd(int sum, int num) {
    if (sum < num) {
        return false;
    } else {
        if ((sum - (num - 1)) % 2 == 1) {
            for (int i = 0; i < num - 1; i++) {
                answer.push_back(1);
            }
            answer.push_back(sum - (num - 1));
            return true;
        } else {
            return false;
        }
    }
}

void print(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
        cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int cases, sum, num;
    cin >> cases;
    while (cases--) {
        answer.clear();
        cin >> sum >> num;
        if (checkEven(sum, num)) {
            cout << "YES" << endl;
            print(answer);
        } else if (checkOdd(sum, num)) {
            cout << "YES" << endl;
            print(answer);
        } else {
            cout << "NO" << endl;
        }
    }

	return 0;
}