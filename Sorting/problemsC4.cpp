#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparison function for qsort
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int size;
    scanf("%d", &size);
    getchar();

    char student[1001][1001];
    char **studentPtrs = (char **)malloc(size * sizeof(char *)); // Array of pointers to strings

    // Read strings and initialize pointers
    for (int i = 0; i < size; i++) {
        scanf("%[^\n]", student[i]);
        getchar();
        studentPtrs[i] = student[i];
    }

    // Sort the array of pointers using qsort
    qsort(studentPtrs, size, sizeof(studentPtrs[0]), compareStrings);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        printf("%s\n", studentPtrs[i]);
    }

    // Free dynamically allocated memory
    free(studentPtrs);

    return 0;
}

