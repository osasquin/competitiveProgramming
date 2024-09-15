#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N; 
    cin >> N;

    while (N--) {
        int T;  
        cin >> T;

        vector<int> tiros(T); 
        for (int i = 0; i < T; i++) {
            cin >> tiros[i];
        }

        string pulos;  
        cin >> pulos; 

        int atingido = 0;

        for (int i = 0; i < T; i++) {
            if (pulos[i] == 'S') {
                if (tiros[i] < 3)
                    atingido++;
            } else if (pulos[i] == 'J') {
                if (tiros[i] > 2)
                    atingido++;
            }
        }

        cout << atingido << endl;
    }

    return 0;
}
