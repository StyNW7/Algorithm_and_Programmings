#include <stdio.h>
#include <string.h>

#define MAX_STRING_SIZE 1001

void swapStrings(char arr[][MAX_STRING_SIZE], int a, int b) {
    char temp[MAX_STRING_SIZE];
    strcpy(temp, arr[a]);
    strcpy(arr[a], arr[b]);
    strcpy(arr[b], temp);
}

// Partition function for quicksort
int partition(char arr[][MAX_STRING_SIZE], int low, int high) {
    char pivot[MAX_STRING_SIZE];
    strcpy(pivot, arr[high]);
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (strcmp(arr[j], pivot) <= 0) {
            i++;
            swapStrings(arr, i, j);
        }
    }

    swapStrings(arr, i + 1, high);
    return i + 1;
}

// Quicksort function
void quickSort(char arr[][MAX_STRING_SIZE], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {

	FILE *file = fopen("testdata.in", "r");
	
	int size;
    fscanf(file, "%d\n", size);
    
    char student[size][MAX_STRING_SIZE];
	
	int count = 0;
	
	while(!feof(file)){
		fscanf(file, "%[^\n]\n", student[count]);
		count++;
	}
	
	fclose(file);

    // Apply quicksort to the array of strings
    quickSort(student, 0, size - 1);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        printf("%s\n", student[i]);
    }

    return 0;
}

