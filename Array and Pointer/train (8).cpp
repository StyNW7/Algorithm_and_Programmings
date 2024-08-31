#include <stdio.h>
#include <string.h>

int main() {
    char haystack[] = "This is a sample string";
    char needle[] = "sample";

    char *result = strstr(haystack, needle);

    if (result != NULL) {
        printf("'%s' found at position %ld\n", needle, result - haystack);
    } else {
        printf("'%s' not found in the string.\n", needle);
    }

    return 0;
}
