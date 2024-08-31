#include <stdio.h>

int main() {
    int A, B;
    printf("Masukkan angka A: ");
    scanf("%d", &A);
    printf("Masukkan angka B: ");
    scanf("%d", &B);

    int carry = 0;
    int result = 0;
    int multiplier = 1;

    while (A > 0 || B > 0) {
        int digitA = A % 10;
        int digitB = B % 10;
        int sum = digitA + digitB + carry;

        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }

        result = result + sum * multiplier;
        multiplier *= 10;

        A /= 10;
        B /= 10;
    }

    if (carry > 0) {
        result = result + carry * multiplier;
    }

    printf("Hasil penjumlahan: %d\n", result);

    return 0;
}

