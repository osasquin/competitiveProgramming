#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        bool primo = true;
        if (x < 2){
			primo = false;
		} 
        for (int j = 2; j <= sqrt(x); j++) {
            if (x % j == 0) {
                primo = false;
                break;
            }
        }
        if (primo) {
            cout << x << " eh primo" << endl;
        } else {
            cout << x << " nao eh primo" << endl;
        }
    }

    return 0;
}
