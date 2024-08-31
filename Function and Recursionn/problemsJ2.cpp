#include <stdio.h>

int formula(long long int num) {
    int count = 0;

    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = num * 3 + 1;
        }
        count++;
    }

    return count;
}

int main() {
    int test;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++) {
        long long int num;
        scanf("%lld", &num);

        long long int result = formula(num);

        if (result % 2 == 0) {
            printf("Case #%d: Lili\n", i);
        } else {
            printf("Case #%d: Jojo\n", i);
        }
    }

    return 0;
}

