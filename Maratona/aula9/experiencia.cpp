#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int quantidade;
    char animal;
    int total = 0;

    cin >> n;
    map<char, int> cobaias; 
    cobaias['C'] = 0; 
    cobaias['R'] = 0; 
    cobaias['S'] = 0; 

    while (n--) {
        cin >> quantidade >> animal;
        cobaias[animal] += quantidade;
        total += quantidade;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << cobaias['C'] << endl;
    cout << "Total de ratos: " << cobaias['R'] << endl;
    cout << "Total de sapos: " << cobaias['S'] << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (cobaias['C'] * 100.0 / total) << " %" << endl;
    cout << "Percentual de ratos: " << (cobaias['R'] * 100.0 / total) << " %" << endl;
    cout << "Percentual de sapos: " << (cobaias['S'] * 100.0 / total) << " %" << endl;

    return 0;
}
