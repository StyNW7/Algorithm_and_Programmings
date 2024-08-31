#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%[^\n]", input);

    printf("Alphabetic characters in the input: ");

    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            putchar(input[i]);
        }
    }

    printf("\n");

    return 0;
}
