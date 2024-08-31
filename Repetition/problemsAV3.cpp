#include <stdio.h>

int main() {
    long long int num;
    scanf("%lld", &num);
    
    long long int counter = 0;

    for (long long int i = 0; i <= num; i++) {
        for (long long int j = 0; j <= num - i; j++) {
            for (long long int a = 0; a <= num-i-j; a++){
            	long long int x = num - i - j - a;
            	if (x >= 0) {
                	counter++;
            	}
			}
        }
    }

    printf("%lld\n", counter);

    return 0;
}
