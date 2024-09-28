#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, time1, time2, gols_mandante1, gols_visitante1, gols_mandante2, gols_visitante2;
    string placar;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        time1 = 0; 
        time2 = 0;

        cin >> gols_mandante1 >> placar >> gols_visitante1;

        cin >> gols_mandante2 >> placar >> gols_visitante2;

        time1 = gols_mandante1 + gols_visitante2;
        time2 = gols_visitante1 + gols_mandante2;

        if (time1 > time2) {
            cout << "Time 1" << endl;
        } else if (time1 < time2) {
            cout << "Time 2" << endl;
        } else {
            int saldo1 = time1 - time2;
            int saldo2 = time2 - time1;

            if (saldo1 > saldo2) {
                cout << "Time 1" << endl;
            } else if (saldo1 < saldo2) {
                cout << "Time 2" << endl;
            } else {
                if (gols_visitante2 > gols_visitante1) {
                    cout << "Time 1" << endl;
                } else if (gols_visitante1 > gols_visitante2) {
                    cout << "Time 2" << endl;
                } else {
                    cout << "Penaltis" << endl;
                }
            }
        }
    }

    return 0;
}
