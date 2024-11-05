#include <bits/stdc++.h>

using namespace std;

int main() {
    int C;
    cin >> C;
    
    while (C--) {
        int P;
        cin >> P;
        
        int r = 0, g = 0, b = 0;

        for (int i = 0; i < P; i++) {
            char M, S;
            cin >> M >> S;
            
            if (M == 'G' && S == 'R') {
                g += 1; // anti-hor�rio
            } else if (M == 'G' && S == 'B') {
                g += 2; // hor�rio
            } else if (M == 'R' && S == 'B') {
                r += 1; // anti-hor�rio
            } else if (M == 'R' && S == 'G') {
                r += 2; // hor�rio
            } else if (M == 'B' && S == 'G') {
                b += 1; // anti-hor�rio
            } else if (M == 'B' && S == 'R') {
                b += 2; // hor�rio
            }
        }

        if (r == g && g == b) {
            cout << "trempate" << endl;
        } else if ((r == g && r > b) || 
                   (r == b && r > g) || 
                   (g == b && g > r)) {
            cout << "empate" << endl;
        } else {
            if (r > g && r > b) {
                cout << "red" << endl;
            } else if (g > r && g > b) {
                cout << "green" << endl;
            } else {
                cout << "blue" << endl;
            }
        }
    }
    
    return 0;
}
