#include <iostream>
#include <cstring> 

using namespace std;

int main() {
    int n;
    char c[1000][20], temp[20];
    
    cin >> n;
    cin.ignore(); 

    while (n--) {
        int i = 0;

        while (i < 1000 && cin >> c[i]) {
            i++;
            if (cin.peek() == '\n') { 
                break;
            }
        }

        for (int j = 0; j < i; j++) {
            for (int k = j + 1; k < i; k++) {
                if (strcmp(c[j], c[k]) == 0) { 
                    for (int l = k; l < i - 1; l++) {
                        strcpy(c[l], c[l + 1]); 
                    }
                    i--; 
                    k--; 
                }
            }
        }

        for (int j = 0; j < i - 1; j++) {
            for (int k = j + 1; k < i; k++) {
                if (strcmp(c[j], c[k]) > 0) { 
                    strcpy(temp, c[j]);
                    strcpy(c[j], c[k]);
                    strcpy(c[k], temp);
                }
            }
        }

        for (int j = 0; j < i; j++) {
            if (j > 0) cout << " ";
            cout << c[j];
        }
        cout << endl;
    }

    return 0;
}
