#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
 
// public class ICPC {
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);

//         int numLayers = in.nextInt();
//         ArrayList<Integer> started = new ArrayList<>();
//         int completed = 0;
//         for (int i = 0; i < numLayers; i++) {
//             int layer = in.nextInt();
//             if (layer == 1) {
//                 started.add(1);
//             } else if (started.size() != 0){
//                 for (int j = 0; j < started.size(); j++) {
//                     if (layer == started.get(j) + 1) {
//                         started.set(j, started.get(j) + 1);
//                         if (started.get(j) == 5) {
//                             completed++;
//                             started.remove(j);
//                         }
//                         break;
//                     }
//                 }
//             }
//         }

//         System.out.print(completed);
//     }

// }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int numBeans;
    int numQual;
    cin >> numQual;
    int roundCount = 0;
    int in;
    for (int i = 0; i < numQual; i++) {
        cin >> numBeans;
        while (numBeans % 2 == 0) {
            numBeans = numBeans>>1;
            roundCount++;
        }
    }

    cout << roundCount << endl;

	return 0;
}