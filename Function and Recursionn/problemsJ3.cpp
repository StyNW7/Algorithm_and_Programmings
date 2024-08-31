#include <stdio.h>
#include <stdint.h>

#define MAX_N 1000000

int64_t results[MAX_N];  // Memoization table

int64_t formula(int64_t num) {
    if (num < MAX_N && results[num] != 0) {
        return results[num];
    }

    int64_t count = 0;
    int64_t originalNum = num;

    while (num != 1) {
        if (num < MAX_N && results[num] != 0) {
            count += results[num];
            break;
        }

        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = num * 3 + 1;
        }
        count++;
    }

    if (originalNum < MAX_N) {
        results[originalNum] = count;
    }

    return count;
}

int main() {
    int test;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++) {
        int64_t num;
        scanf("%lld", &num);

        int64_t result = formula(num);

        if (result % 2 == 0) {
            printf("Case #%d: Lili\n", i);
        } else {
            printf("Case #%d: Jojo\n", i);
        }
    }

    return 0;
}

