#include <bits/stdc++.h>

using namespace std;

int call_count = 0;  

int fibonacci(int n) {
    call_count++;  

    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, f, a;
	
	cin >> a;
    
	while(a--){
		cin >> n;
		
		call_count = 0;
		f = fibonacci(n);
		
		cout << "fib(" << n << ") = " << call_count - 1 << " calls = " << f << endl;
    }
	
    return 0;
}
