#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, counta, countb;
    string s;
    
    cin >> n;  
    while(n--) {
        cin >> s;
        counta = 0;  
        countb = 0;  
        int diamantes = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '<') {
                countb++;  
            } 
            else if (s[i] == '>' && countb > 0) {
                counta++;  
                countb--;  
                diamantes++;  
            }
        }

        cout << diamantes << endl;
    }

    return 0;
}
