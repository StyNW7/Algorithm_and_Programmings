#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is! a sample s#entence";
    char *token = strtok(str, "#"); // Split on spaces
    printf("Token: %s\n", token);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " "); // NULL means continue splitting from the last string
    }

    return 0;
}
