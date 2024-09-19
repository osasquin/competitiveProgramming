#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;  
    cin >> n;  

    vector<int> t(n);  

    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int menor_indice = 0;  
    int menor_valor = t[0];  

    for (int i = 1; i < n; i++) {
        if (t[i] < menor_valor) {
            menor_valor = t[i];
            menor_indice = i;  
        }
    }

    cout << menor_indice + 1 << endl;

    return 0;
}
