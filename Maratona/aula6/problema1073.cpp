#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			int pw = pow(i, 2);
			cout << i << "^2 = " << pw << endl;
		}
	}
	
	
	return 0;
}