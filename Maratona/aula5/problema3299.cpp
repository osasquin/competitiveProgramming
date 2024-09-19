#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; 
    bool badluck = false;
    cin >> n;
    
    if (n.find("13") != string::npos) {
        badluck = true;
    }

    if (badluck) {
        cout << n << " es de Mala Suerte" << endl;
    } else {
        cout << n << " NO es de Mala Suerte" << endl;
    }
    
    return 0;
}
