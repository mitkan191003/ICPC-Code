#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int num1, num2;
    cin >> num1 >> num2;
    
    if (num1 == num2) {
        cout << num1 << "=" << num2 << endl;
    }
    else {
        string a = to_string(num1);
        string b = to_string(num2);
        bool aMoreb = false;
        bool bMorea = false;
        int smallerLen = 0;
        if (a.length() > b.length()) {
            smallerLen = b.length();
        } 
        else {
            smallerLen = a.length();
        }

        for (int i = 0; i < smallerLen; i++) {
            if (a[i] > b[i]) {
                aMoreb = true;
                break;
            }
            if (a[i] < b[i]) {
                bMorea = true;
                break;
            }
        }

        cout << a;
        if (bMorea) {
            cout << "<";
        }
        else if (aMoreb) {
            cout << ">";
        }
        else if (smallerLen == a.length()){
            cout << "<";
        }
        else {
            cout << ">";
        }
        cout << b << endl;

    }

	return 0;
}