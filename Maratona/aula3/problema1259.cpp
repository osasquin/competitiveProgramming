#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, b[100001], p[100001], i[100001];
    int countP = 0, countI = 0;
    
    cin >> n;
    
    for(int j = 0; j < n; j++){
        cin >> b[j];
        if(b[j] % 2 == 0){
            p[countP++] = b[j];
        } else {
            i[countI++] = b[j];
        }
    }
    
    sort(p, p + countP);
    sort(i, i + countI, greater<int>());
    
    for(int j = 0; j < countP; j++){
        cout << p[j] << endl;
    }
    for(int j = 0; j < countI; j++){
        cout << i[j] << endl;
    }
    
    return 0;
}
