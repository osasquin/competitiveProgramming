#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    vector<int> fila(N);

    for (int i = 0; i < N; i++) {
        cin >> fila[i];
    }

    cin >> M;
    unordered_set<int> sairam;

    for (int i = 0; i < M; i++) {
        int id;
        cin >> id;
        sairam.insert(id);
    }

    bool first = true;
    for (int i = 0; i < N; i++) {
        if (sairam.find(fila[i]) == sairam.end()) {
            if (!first) {
                cout << " ";
            }
            cout << fila[i];
            first = false;
        }
    }
    cout << endl;

    return 0;
}
