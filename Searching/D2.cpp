#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa {
    char name[20];
    int score;
};

// Comparison function for bubble sort
void bubbleSort(Mahasiswa mhs[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare by score and, if scores are the same, by lexicographical order of names
            if (mhs[j].score < mhs[j + 1].score ||
                (mhs[j].score == mhs[j + 1].score && strcmp(mhs[j].name, mhs[j + 1].name) < 0)) {
                // Swap the elements
                Mahasiswa temp = mhs[j];
                mhs[j] = mhs[j + 1];
                mhs[j + 1] = temp;
            }
            
        }
    }
}

// Binary search function for finding the index of a specific name
int binarySearch(const Mahasiswa mhs[], int size, const char name[]) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(mhs[mid].name, name);

        if (cmp == 0) {
            return mid; // Found
        } else if (cmp < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Not found
}

int main() {
    int test;
    scanf("%d", &test);

    for (int x = 1; x <= test; x++) {
        int size;
        scanf("%d", &size);

        Mahasiswa mhs[size];

        for (int i = 0; i < size; i++) {
            scanf("%s#%d", mhs[i].name, &mhs[i].score); getchar();
        }

        // Sort the array of Mahasiswa using bubble sort
        bubbleSort(mhs, size);

        char searchName[20];
        scanf("%s", searchName);

        // Use binary search to find the index of the search name
        int index = binarySearch(mhs, size, searchName);

        // Print the result
        printf("Case #%d: ", x);
        if (index != -1) {
            printf("%d\n", index+1);
        } else {
            printf("Not found\n");
        }
    }

    return 0;
}

