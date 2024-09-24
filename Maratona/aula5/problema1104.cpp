#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, X, Y;
    set<int> x;  
    set<int> y;  
    
    while (1) {
        cin >> A >> B;

        if (A == 0 && B == 0) {
            break;
        }

        x.clear();
        y.clear();

        for (int i = 0; i < A; i++) {
            cin >> X;
            x.insert(X);
        }

        for (int i = 0; i < B; i++) {
            cin >> Y;
            y.insert(Y);
        }

        int countA = 0, countB = 0;

        for (auto it = x.begin(); it != x.end(); ++it) {
            if (y.find(*it) == y.end()) {
                countA++;
            }
        }

        for (auto it = y.begin(); it != y.end(); ++it) {
            if (x.find(*it) == x.end()) {
                countB++;
            }
        }

        cout << min(countA, countB) << endl;
    }

    return 0;
}
