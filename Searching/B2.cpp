#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa {
    char nim[20];
    char name[100];
};

// Compare function for sorting Mahasiswa array based on nim
//bool compareMahasiswa(const Mahasiswa& a, const Mahasiswa& b) {
//    return strcmp(a.nim, b.nim) < 0;
//}

// Binary search function
int binarySearch(Mahasiswa mhs[], int size, const char comparison[]) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(mhs[mid].nim, comparison);

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
    FILE* fp = fopen("testdata.in", "r");

    int size;
    fscanf(fp, "%d", &size);

    Mahasiswa mhs[255];
    int counter = 0;

    while (!feof(fp)) {
        fscanf(fp, "%s %s", mhs[counter].nim, mhs[counter].name);
        counter++;
    }

    fclose(fp);
    
//    sort(mhs, mhs + size, compareMahasiswa);

    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++) {
        char comparison[20];
        scanf("%s", comparison);

        printf("Case #%d: ", i + 1);

        // Use binary search instead of linear search
        int index = binarySearch(mhs, size, comparison);
        if (index != -1) {
            printf("%s\n", mhs[index].name);
        } else {
            printf("N/A\n");
        }
    }

    return 0;
}

