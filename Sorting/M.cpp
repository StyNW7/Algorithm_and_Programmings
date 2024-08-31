#include <stdio.h>

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
            }
        }
    }
}

int main(){
	
	int size;
	scanf("%d", &size);
	int num[size];
	for (int i = 0; i < size; i++) scanf("%d", &num[i]);
	
	bubbleSort (num, size);
	
	if (size % 2 == 1){
		for (int x = (size+1)/2; x < size; x++){
			if (x + 1 == size){
				printf("%d", num[x]);
			}
			else printf("%d ", num[x]);
		}
	}
	
	else {
		for (int x = (size+1)/2 + 1; x < size; x++){
			if (x + 1 == size){
				printf("%d", num[x]);
			}
			else printf("%d ", num[x]);
		}
	}
	
	printf("\n");
	
	return 0;
}
