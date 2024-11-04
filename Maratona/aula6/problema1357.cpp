#include <bits/stdc++.h>

using namespace std;

map<char, vector<string>> brailleDigits = {
    {'1', { ".*", "**", ".." }},
    {'2', { ".*", "*.", ".." }},
    {'3', { "**", "..", ".." }},
    {'4', { "**", ".*", ".." }},
    {'5', { "*.", ".*", ".." }},
    {'6', { "**", "*.", ".." }},
    {'7', { "**", "**", ".." }},
    {'8', { "*.", "**", ".." }},
    {'9', { ".*", "**", ".." }},
    {'0', { ".*", "*.", ".." }}
};

map<vector<string>, char> digitBraille = {
    { { ".*", "**", ".." }, '1' },
    { { ".*", "*.", ".." }, '2' },
    { { "**", "..", ".." }, '3' },
    { { "**", ".*", ".." }, '4' },
    { { "*.", ".*", ".." }, '5' },
    { { "**", "*.", ".." }, '6' },
    { { "**", "**", ".." }, '7' },
    { { "*.", "**", ".." }, '8' },
    { { ".*", "**", ".." }, '9' },
    { { ".*", "*.", ".." }, '0' }
};

void translateToBraille(string digits) {
    int n = digits.size();
    vector<string> braille(3, ""); 

    for (int i = 0; i < n; i++) {
        braille[0] += brailleDigits[digits[i]][0] + " ";
        braille[1] += brailleDigits[digits[i]][1] + " ";
        braille[2] += brailleDigits[digits[i]][2] + " ";
    }

    for (int i = 0; i < 3; i++) {
        braille[i].pop_back();
        cout << braille[i] << endl;
    }
}

void translateToDigits(int d) {
    vector<string> brailleLines(3);

    for (int i = 0; i < 3; i++) {
        getline(cin >> ws, brailleLines[i]);
    }

    for (int i = 0; i < d; i++) {
        vector<string> brailleChar(3);
        brailleChar[0] = brailleLines[0].substr(i * 3, 2);
        brailleChar[1] = brailleLines[1].substr(i * 3, 2);
        brailleChar[2] = brailleLines[2].substr(i * 3, 2);

        cout << digitBraille[brailleChar];
    }
    cout << endl;
}

int main() {
    int d; 
    char type; 

    while (cin >> d && d != 0) {
        cin >> type;

        if (type == 'S') {
            string digits;
            cin >> digits;
            translateToBraille(digits);
        } else if (type == 'B') {
            translateToDigits(d);
        }
    }

    return 0;
}
