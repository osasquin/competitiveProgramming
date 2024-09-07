#include <stdio.h>
#include <string.h>

int f(int x) {
    char* numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                       "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", 
                       "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", 
                       "seventy", "eighty", "ninety", "hundred"};
                       
    if (x >= 1 && x <= 20){
		return strlen(numbers[x - 1]);
	} 
    if (x > 20 && x < 100) {
        int tens = x / 10;
        int units = x % 10;
        int len = strlen(numbers[18 + tens - 2]);
        if (units != 0) len += strlen(numbers[units - 1]);
        return len;
    }
    if (x == 100){
		return strlen(numbers[26]);
	} 
    return 0;
}

int main() {
    int x, i, proximo = 0;
    scanf("%d", &x);
    
    for (i = 0; i < 1000; i++) {
        proximo = f(x);
        if (proximo == x){
			break;
		}
        x = proximo;
    }
    
    printf("%d\n", x);
    
    return 0;
}
