#include <bits/stdc++.h>

using namespace std;

int main() {
    int horasI, horasF, minutosI, minutosF;
    int horasTotal, minutosTotal;

    cin >> horasI >> horasF >> minutosI >> minutosF;

    if (horasI == horasF && minutosI == minutosF) {
        horasTotal = 24;
        minutosTotal = 0;
    } else if (horasI < horasF || (horasI == horasF && minutosI < minutosF)) {
        horasTotal = horasF - horasI;
    } else {
        horasTotal = (24 - horasI) + horasF;
    }

    if (minutosI > minutosF) {
        minutosTotal = (60 - minutosI) + minutosF;
        horasTotal--;  
    } else {
        minutosTotal = minutosF - minutosI;
    }

    if (horasTotal < 0) {
        horasTotal += 24;
    }

    cout << "O JOGO DUROU " << horasTotal << " HORA(S) E " << minutosTotal << " MINUTO(S)" << endl;

    return 0;
}
