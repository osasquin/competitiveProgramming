#include <iostream>

using namespace std;

int main() {
    int n, a[5];
    
    while (cin >> n && n != 0) {
        while (n--) {
            int count = 0, b = -1;
            
            for (int i = 0; i < 5; i++) {
                cin >> a[i];
                if (a[i] <= 127) {
                    count++;
                    b = i; 
                }
            }
            
            if (count == 1) {
                cout << (char)('A' + b) << endl;
            } else {
                cout << '*' << endl;
            }
        }
    }

    return 0;
}
