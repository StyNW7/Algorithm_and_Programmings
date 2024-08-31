#include <stdio.h>

int main() {
    long long int num;
    scanf("%lld", &num);
    
    long long int counter = 0;

    for (long long int i = 0; i <= num; i++) {
        for (long long int j = 0; j <= num - i; j++) {
            long long int k = num - i - j;
            if (k >= 0) {
                counter++;
            }
        }
    }

    printf("%lld\n", counter);

    return 0;
}
