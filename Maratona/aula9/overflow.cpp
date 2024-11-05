#include <bits/stdc++.h>

using namespace std;

int main(){

    int limit, op1, op2;
    char op;

    cin >> limit;
    cin >> op1 >> op >> op2;

    if (op == '*'){
        if (limit < op1 * op2){
            cout << "OVERFLOW" << endl;
        }
        else
            cout << "OK" << endl;
    }
    else{
        if (limit < op1 + op2){
            cout << "OVERFLOW" << endl;
        }
        else
            cout << "OK" << endl;
    }

    return 0;
}