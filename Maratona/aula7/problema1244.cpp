#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int, string> is;
typedef pair<int, is> iis;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    string a, b;
    while (t--) {
        priority_queue<iis> resp;
        getline(cin, a);
        int pos = 60;
        istringstream buffer(a);
        while (buffer >> b) {
            resp.push(mp(int(b.size()), mp(pos, b)));
            pos--;
        }
        int c = 0;
        while (!resp.empty()) {
            if (!c)
                cout << resp.top().second.second;
            else
                cout << " " << resp.top().second.second;
            resp.pop();
            c++;
        }
        cout << "\n";
    }
    return 0;
}