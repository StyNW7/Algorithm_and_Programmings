#include <stdio.h>
#include <string.h>

// Function to compute the nth Fibonacci character string
void fibonacciString(int n, char* a, char* b) {
    const int maxStringLength = 100; // Adjust the maximum string length as needed
    char fib[maxStringLength];
    
    if (n >= 0) {
        printf("%s", a);
    }
    
    if (n >= 1) {
        printf("%s", b);
    }

    for (int i = 2; i <= n; i++) {
        strcpy(fib, b);
        strcat(fib, a);
        printf("%s", fib);
        strcpy(a, b);
        strcpy(b, fib);
    }
}

int main() {
    int n;
    char a[100], b[100];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the first character: ");
    scanf("%s", a);
    
    printf("Enter the second character: ");
    scanf("%s", b);

    printf("Fibonacci character sequence up to the %d-th term:\n", n);
    fibonacciString(n, a, b);

    return 0;
}

