#include <stdio.h>

int main() {
    int n; // Number of rows for the middle triangle
    printf("Enter the number of rows for the middle triangle: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        // If n is even, add 1 to make it odd (for a centered triangle)
        n++;
    }

    int space = n / 2;
    int stars = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");

        if (i < n / 2 + 1) {
            space--;
            stars += 2;
        } else {
            space++;
            stars -= 2;
        }
    }

    return 0;
}
