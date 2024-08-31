#include <stdio.h>

int total = 0;
int time = 0;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                total += time;
            }
        }
    }
}


int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		int size;
		scanf("%d %d", &size, &time);
		
		int train[size];
		for (int a = 0; a < size; a++) scanf("%d", &train[a]);
		
		bubbleSort(train, size);
		
		printf("Case #%d: %d\n", i, total);
		
		total = 0;
		
	}
	
	return 0;
}
