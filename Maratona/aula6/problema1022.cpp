#include <iostream>

using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplificar(int &num, int &den) {
    int divisor = mdc(abs(num), abs(den));
    num /= divisor;
    den /= divisor;
    if (den < 0) {
        num = -num;
        den = -den;
    }
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int n1, d1, n2, d2;
        char op, div1, div2;

        cin >> n1 >> div1 >> d1 >> op >> n2 >> div2 >> d2;

        int num_res, den_res; 

        switch (op) {
            case '+':  // Soma
                num_res = n1 * d2 + n2 * d1;
                den_res = d1 * d2;
                break;
            case '-':  // Subtração
                num_res = n1 * d2 - n2 * d1;
                den_res = d1 * d2;
                break;
            case '*':  
                num_res = n1 * n2;
                den_res = d1 * d2;
                break;
            case '/':  
                num_res = n1 * d2;
                den_res = n2 * d1;
                break;
        }

        cout << num_res << "/" << den_res << " = ";

        simplificar(num_res, den_res);

        cout << num_res << "/" << den_res << endl;
    }

    return 0;
}
