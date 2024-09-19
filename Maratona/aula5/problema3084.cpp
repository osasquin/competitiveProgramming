#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, horafinal, minutofinal;
    float m;
    
    while (cin >> h >> m) {
        horafinal = h / 30;
        minutofinal = m / 6;

        cout << setw(2) << setfill('0') << horafinal << ":" << setw(2) << setfill('0') << minutofinal << endl;
    }
    
    return 0;
}
