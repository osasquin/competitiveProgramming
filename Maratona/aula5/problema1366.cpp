#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c, v;
    while (cin >> n && n) {
        vector<int> C(n), V(n);
        int count = 0;

        for (int i = 0; i < n; i++) {
            cin >> C[i] >> V[i];
            count += V[i] / 2;  
        }

        cout << count / 2 << endl;
    }

    return 0;
}
