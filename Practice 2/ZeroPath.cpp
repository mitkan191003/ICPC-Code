#include <bits/stdc++.h>
using namespace std;

void PrintArray(vector<vector<int>> array, const int n, const int m);

int main(){
    ifstream input("input.txt");
        if (input.is_open()) {
            cin.rdbuf(input.rdbuf());
        }

    unsigned int cases;
    cin >> cases;

    int n, m;
    for (int i = 0; i < cases; i++) {
        cin >> n >> m;
        vector<vector<int>> array;
        array.resize(n);

        for (int j = 0; j < n; j++) {
            array[j].resize(m);
            for (int k = 0; k < m; k++) {
                cin >> array[j][k];
            }
        }

        
    }
}

void PrintArray(vector<vector<int>> array, const int n, const int m) {
    for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cout << array[j][k] << " ";
            }
            cout << endl;
        }
}