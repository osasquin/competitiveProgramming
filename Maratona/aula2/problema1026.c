#include <stdio.h>

void decimalToBinary(long n, long *binArray) {
    for (int i = 31; i >= 0; i--) {
        binArray[i] = n % 2;
        n = n / 2;
    }
}

long binaryToDecimal(long *binArray) {
    long decimal = 0;
    long base = 1;
    for (int i = 31; i >= 0; i--) {
        decimal += binArray[i] * base;
        base = base * 2;
    }
    return decimal;
}

void addBinary(long *a, long *b, long *sum) {
    for (int i = 0; i < 32; i++) {
        sum[i] = (a[i] + b[i]) % 2;
    }
}

int main() {
    long n1, n2;
    long bin1[32] = {0}, bin2[32] = {0}, sum[32] = {0};
	
	while(scanf("%ld %ld", &n1, &n2) != EOF){
		decimalToBinary(n1, bin1);
		decimalToBinary(n2, bin2);

		addBinary(bin1, bin2, sum);

		long sumDecimal = binaryToDecimal(sum);
		printf("%ld\n", sumDecimal);
	}


    return 0;
}
