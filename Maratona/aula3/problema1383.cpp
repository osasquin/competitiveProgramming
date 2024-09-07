#include <iostream>

using namespace std;

int main() {
    int n, i, j, k, l, m, o;
    int s[9][9];
    int sum1, sum2, sum3;
    bool sudoku;

    cin >> n;
    for (int inst = 1; inst <= n; inst++) {
        sudoku = true;

        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                cin >> s[i][j];
            }
        }

        for (i = 0; i < 9; i++) {
            sum1 = 0;
            for (j = 0; j < 9; j++) {
                sum1 += s[i][j];
            }
            if (sum1 != 45) {
                sudoku = false;
                break;
            }
        }

        for (j = 0; j < 9 && sudoku; j++) {
            sum2 = 0;
            for (i = 0; i < 9; i++) {
                sum2 += s[i][j];
            }
            if (sum2 != 45) {
                sudoku = false;
                break;
            }
        }

        for (i = 0; i < 9 && sudoku; i += 3) {
            for (j = 0; j < 9 && sudoku; j += 3) {
                sum3 = 0;
                for (k = 0; k < 3; k++) {
                    for (l = 0; l < 3; l++) {
                        sum3 += s[i + k][j + l];
                    }
                }
                if (sum3 != 45) {
                    sudoku = false;
                    break;
                }
            }
        }

        cout << "Instancia " << inst << endl;
        if (sudoku) {
            cout << "SIM" << endl;
        } else {
            cout << "NAO" << endl;
        }
        cout << endl;
    }

    return 0;
}
