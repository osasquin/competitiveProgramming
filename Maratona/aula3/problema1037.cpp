#include <iostream>
#include <string>

using namespace std;

int main() {
    string expressao;

    while (getline(cin, expressao)) {
        int balance = 0;
        bool correto = true;

        for (char c : expressao) {
            if (c == '(') {
                balance++; 
            } else if (c == ')') {
                balance--; 
                if (balance < 0) {
                    correto = false; 
                    break;
                }
            }
        }


        if (correto && balance == 0) {
            cout << "correct" << endl;
        } else {
            cout << "incorrect" << endl;
        }
    }

    return 0;
}
