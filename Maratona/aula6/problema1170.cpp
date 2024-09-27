#include <bits/stdc++.h>

using namespace std;

int calcularDias(double comida) {
    if (comida <= 1.0) {
        return 0;  
    } else {
        return 1 + calcularDias(comida / 2);
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        double comida;
        cin >> comida;

        int dias = calcularDias(comida); 
        cout << dias << " dias" << endl;
    }

    return 0;
}
