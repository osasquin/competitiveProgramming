class Solution {
public:
    string reverseVowels(string s) {
        int size = s.size();
        string burger;
        string burger1;

        for (int i = 0; i < size; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                burger += s[i];
            }
        }

        int size2 = burger.size();
        burger1 = burger; 

        for (int j = 0; j < size2; j++) {
            burger1[j] = burger[size2 - j - 1];
        }

        int x = 0;
        for (int i = 0; i < size; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                s[i] = burger1[x++];
            }
        }

        return s;
    }
};