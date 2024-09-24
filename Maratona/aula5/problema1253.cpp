#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;  
    cin >> N;
    
    while (N--) {
        string e;
        int s;
        
        cin >> e >> s;

        for (int i = 0; i < e.size(); i++) {
            char d = e[i] - s;
            
            
            if (d < 'A') {
                d += 26;
            }
            
            cout << d;
        }
        
        cout << endl;  
    }

    return 0;
}
