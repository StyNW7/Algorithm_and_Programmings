#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_SIZE 100

// Comparison function for qsort
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)b, *(const char **)a);
}

void sortStrings(char *arr[], int size) {
    qsort(arr, size, sizeof(char *), compareStrings);
}

int main() {
    int size;

    // Get the size of the array
    printf("Enter the number of strings: ");
    scanf("%d", &size);
    getchar();  // Consume the newline character

    char *strings[MAX_STRING_SIZE];

    // Input the strings
    printf("Enter the strings:\n");
    for (int i = 0; i < size; i++) {
        strings[i] = malloc(MAX_STRING_SIZE * sizeof(char));
        fgets(strings[i], MAX_STRING_SIZE, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remove newline character if present
    }

    // Sort the strings alphabetically
    sortStrings(strings, size);

    // Display the sorted strings in reverse order
    printf("Sorted and reversed strings:\n");
    for (int i = 0; i < size; i++) {
        int len = strlen(strings[i]);
        for (int j = len - 1; j >= 0; j--) {
            printf("%c", strings[i][j]);
        }
        printf("\n");
        free(strings[i]); // Free allocated memory for each string
    }

    return 0;
}

