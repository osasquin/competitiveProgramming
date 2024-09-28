#include <iostream>

using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        int mary = 0, john = 0;

        for (int i = 0; i < n; i++) {
            int c;
            cin >> c;

            if (c == 0) {
                mary += 1;
            } else {
                john += 1;
            }
        }

        cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
    }

    return 0;
}
