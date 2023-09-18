#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
using namespace std;

int BiggestInversion(vector<int> arr) {
    int biggest_inversion = 0;
    for (int i = 1; i < arr.size(); i++) {
        if ((arr[i] < arr[i - 1]) && (arr[i -1] > biggest_inversion)) {
            biggest_inversion = arr[i - 1];
        }
    }
    return biggest_inversion;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int cases;
    cin >> cases;
    while (cases--) {
        int length;
        cin >> length;
        vector<int> arr(length);
        for (int i = 0; i < length; i++) {
            cin >> arr[i];
        }

        cout << BiggestInversion(arr) << endl;
    }

    return 0;
}