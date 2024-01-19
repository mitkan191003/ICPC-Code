#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int cases;
    cin >> cases;
    while (cases--) {
        int len, rem, mul, input;
        int maxsum = INT_MIN;
        int arr[200000];
        int accum[200000];
        cin >> len >> rem >> mul;
        int arrlen = len;
        len = 0;
        while (len < arrlen) {
            cin >> arr[len];
            len++;
        }
        // for (int i = 0; i < arrlen; i++) {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
        sort(arr, arr + arrlen, greater<int>());

        for (int i = 0; i < arrlen; i++) {
            if (i == 0) {
                accum[i] = arr[i];
            }
            else {
                accum[i] = accum[i - 1] + arr[i];
            }
        }

        for (int i = 0; i <= rem && i <= arrlen; i++) {
            int tmpsum;
            if (i == 0) {
                tmpsum = accum[arrlen - 1];
            }
            else {
                tmpsum = accum[arrlen - 1] - accum[i-1];
            }
            // cout << "i: " << i << " TMPSUM: " << tmpsum;
            int tmpmul;
            if (arrlen-1 - i < mul) {
                tmpmul = arrlen - i;
            }
            else {
                tmpmul = mul;
            }
            for (int j = i; j < i + tmpmul && j < arrlen; j++) {
                tmpsum -= 2 * arr[j];
            }
            // cout << " newsum: " << tmpsum << endl;
            if (tmpsum > maxsum) {
                maxsum = tmpsum;
            }
        }
        cout << maxsum << "\n";
    }

    return 0;
}