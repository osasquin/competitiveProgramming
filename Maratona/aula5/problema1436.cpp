#include <bits/stdc++.h>

using namespace std;

int main() {
    int T, N;

    cin >> T;

    for (int t = 1; t <= T; t++) {
        cin >> N;  
        vector<int> ages(N);

        for (int i = 0; i < N; i++) {
            cin >> ages[i];  
        }

        int captain_age = ages[N / 2];

        cout << "Case " << t << ": " << captain_age << endl;
    }

    return 0;
}
