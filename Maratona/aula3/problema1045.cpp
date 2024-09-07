#include <iostream>
#include <algorithm>  

using namespace std;

float squareSum(float b, float c){
	return (b*b) + (c*c);
}

int main(){
	float A, B, C, n[3];
	
	cin >> A >> B >> C;
	
	n[0] = A;
	n[1] = B;
	n[2] = C;

	sort(n, n + 3, greater<float>());

	A = n[0];
	B = n[1];
	C = n[2];

	if(A >= (B + C)){
		cout << "NAO FORMA TRIANGULO" << endl;
	} else {
		if((A*A) == squareSum(B, C)){
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if((A*A) > squareSum(B, C)){
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		if((A*A) < squareSum(B, C)){
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		if(A == B && B == C){
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		if((A == B && A != C) || (A == C && A != B) || (B == C && B != A)){
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
	
	return 0;
}
