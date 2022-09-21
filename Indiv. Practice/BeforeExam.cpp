#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
int sum(vector<int> vec ) {
    return accumulate(vec.begin(), vec.end(), 0);
}

vector<int> hrPerDay(vector<int> bots, vector<int> tops, int days, int max) {
    vector<int> hours = bots;
    while (sum(hours) != max) {
        for(int i = 0; i < days; i++) {
            if (hours.at(i) < tops.at(i)) {
                hours.at(i) = hours.at(i) + 1;
                break;
            }
        }
    }
    return hours;
}

void print(vector<int> vector) {
    for (int i = 0; i < vector.size() - 1; i++) {
        cout << vector.at(i) << " ";
    }
    cout << vector.at(vector.size() - 1) << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int days, maxHrs, lowLim = 0, topLim = 0, lowSum = 0, topSum = 0;
    vector<int> bots;
    vector<int> tops;
    vector<int> hours;

    cin >> days >> maxHrs;
    for (int i = 0; i < days; i++) {
        cin >> lowLim >> topLim;
        bots.push_back(lowLim);
        tops.push_back(topLim);
        lowSum = lowSum + lowLim;
        topSum = topSum + topLim;
    }
    if (lowSum <= maxHrs && maxHrs <= topSum) {
        cout << "YES" << endl;
        hours = hrPerDay(bots, tops, days, maxHrs);
        print(hours);
    }
    else {
        cout << "NO" << endl;
    }

	return 0;
}