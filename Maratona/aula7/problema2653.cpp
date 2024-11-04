#include <bits/stdc++.h>

using namespace std;

int main() {
    string joia;
    set<string> joias_distintas;  

    while (cin >> joia) {
        joias_distintas.insert(joia);  
    }

    cout << joias_distintas.size() << endl;

    return 0;
}
