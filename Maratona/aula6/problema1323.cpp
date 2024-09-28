#include <iostream>
using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0) {
        int totalQuadrados = 0;

        for (int i = 1; i <= N; i++) {
            totalQuadrados += i * i;
        }

        cout << totalQuadrados << endl;
    }

    return 0;
}
