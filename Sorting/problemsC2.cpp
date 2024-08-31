#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void merge(char arr[][1001], char temp[][1001], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (strcmp(arr[i], arr[j]) <= 0) {
            strcpy(temp[k], arr[i]);
            i++;
        } else {
            strcpy(temp[k], arr[j]);
            j++;
        }
        k++;
    }

    while (i <= mid) {
        strcpy(temp[k], arr[i]);
        i++;
        k++;
    }

    while (j <= right) {
        strcpy(temp[k], arr[j]);
        j++;
        k++;
    }

    // Copy sorted elements back to the original array
    for (i = 0; i < k; i++) {
        strcpy(arr[left + i], temp[i]);
    }
}

void mergeSort(char arr[][1001], char temp[][1001], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, temp, left, mid);
        mergeSort(arr, temp, mid + 1, right);
        merge(arr, temp, left, mid, right);
    }
}

int main() {
    int size;
    scanf("%d", &size);
    getchar(); // Consume the newline character

    char student[size][1001];
    char temp[size][1001];

    for (int i = 0; i < size; i++) {
        getline(student[i], 1001, stdin);
    }

    mergeSort(student, temp, 0, size - 1);

    for (int i = 0; i < size; i++) {
        printf("%s", student[i]);
    }

    return 0;
}

