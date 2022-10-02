#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1607/D


int main(){
	
    int length, x, out1 = 0, out2 = 0;
    int cases;
    int run = 1;
    while (out1 == out2) {
        ofstream inputs;
        inputs.open("GreatSequencesGeneratedInputs.txt");
        // cases = (rand() % 20) + 1;
        cases = 1;
        inputs << cases << " ";
        for (int i = 0; i < cases; i++) {
            length = (rand() % 20) + 1;
            x = (rand() % 10) + 2;
            vector<int> vec;
            for (int i = 0; i < length; i++) {
                if (i % 3 == 0) {
                    vec.push_back((rand() + 1) * x);
                }
                else if (i % 2 == 0) {
                    vec.push_back(((rand() + 1) / x) + 1);
                }
                else {
                    vec.push_back((rand() % 100) + 1);
                }
            }

            inputs << length << " " << x << endl;
            for (int i = 0; i < length; i++) {
                inputs << vec[i] << " ";
            }
            inputs << endl;
        }
        inputs.close();
        string arguments1 = "1 " + to_string(length) + " " + to_string(x);
        string command1 = "GreatSequence.exe";
        string command2 = "GreatSequence2.exe";

        out1 = system(command1.c_str());
        out2 = system(command2.c_str());
        cout << "run: " << run << " out1: " << out1 << " out2: " << out2 << endl;
        run++;
    }
	return 0;
}