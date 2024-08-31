#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for quicksort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Quicksort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int size;
    scanf("%d", &size);
    int num[size];

    for (int i = 0; i < size; i++) scanf("%d", &num[i]);

    // Use quicksort instead of bubblesort
    quickSort(num, 0, size - 1);

    if (size % 2 == 1) {
        for (int x = (size + 1) / 2; x < size; x++) {
            if (x + 1 == size) {
                printf("%d", num[x]);
            } else {
                printf("%d ", num[x]);
            }
        }
    } else {
        for (int x = (size + 1) / 2 + 1; x < size; x++) {
            if (x + 1 == size) {
                printf("%d", num[x]);
            } else {
                printf("%d ", num[x]);
            }
        }
    }

    printf("\n");

    return 0;
}

