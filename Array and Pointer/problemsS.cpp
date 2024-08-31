#include <stdio.h>

int sumWithoutCarry(int num1, int num2) {
    int result = 0;
    int multiplier = 1;

    while (num1 > 0 || num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;

        int sum = digit1 + digit2;
        sum %= 10;

        result += sum * multiplier;

        multiplier *= 10;
        num1 /= 10;
        num2 /= 10;
    }

    return result;
}

int main() {

    int test;
    scanf("%d", &test);
    
    for (int i = 1; i <= test; i++){
    	int num1, num2;
    	scanf("%d %d", &num1, &num2);
    	
    	printf("Case #%d: %d\n", i, sumWithoutCarry(num1, num2));
	}

    return 0;
}
