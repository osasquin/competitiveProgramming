#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;
	
	cin >> k;
	
	if(k == 1){
		cout << "Top 1" << endl;
	}
	if(k > 1 && k <= 3){
		cout << "Top 3" << endl;
	}
	if(k > 3 && k <= 5){
		cout << "Top 5" << endl;
	}
	if(k > 5 && k <= 10){
		cout << "Top 10" << endl;
	}
	if(k > 10 && k <= 25){
		cout << "Top 25" << endl;
	}	
	if(k > 25 && k <= 50){
		cout << "Top 50" << endl;
	}
	if(k > 50 && k <= 100){
		cout << "Top 100" << endl;
	}

	return 0;
}