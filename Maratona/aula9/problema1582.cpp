#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}


int main(){
    vector<int> num(3);
    while (cin >> num[0] >> num[1] >> num[2]) {
        sort(num.begin(), num.end());
        cout << "tripla";
        if (num[2] * num[2] == (num[0] * num[0] + num[1] * num[1])) {
            cout << " pitagorica";
            if (gcd(num[0], gcd(num[1], num[2])) == 1)
                cout << " primitiva";
        }
        cout << "\n";
    }
    return 0;
}