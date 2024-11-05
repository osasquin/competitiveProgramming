#include <bits/stdc++.h>

using namespace std;

int main() {
    int A1, A2, A3;
    cin >> A1 >> A2 >> A3;
    
    
    int primeiro = A2 * 2 + A3 * 4;
    int segundo = A1 * 2 + A3 * 2;
    int terceiro = A1 * 4 + A2 * 2;
    

    int menor_tempo = min({primeiro, segundo, terceiro});
    

    cout << menor_tempo << endl;
    
    return 0;
}
