#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, C;

    while (cin >> A >> C && (A != 0 || C != 0)) {
        vector<int> tamanho(C);

        for (int i = 0; i < C; i++) {
            cin >> tamanho[i];
        }

        int count = 0;
        int a = A;

        for (int i = 0; i < C; i++) {
            if (tamanho[i] < a) {
                count += (a - tamanho[i]);
            }
            a = tamanho[i];
        }

        cout << count << endl;
    }

    return 0;
}
