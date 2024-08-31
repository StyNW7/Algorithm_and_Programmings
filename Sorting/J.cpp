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
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		int size;
		scanf("%d", &size);
		
		long long int total = 0;
		
		int num[size];
		for (int a = 0; a < size; a++)
		{
			scanf("%d", &num[a]);
			total += num[a];
		}
		
		bubbleSort (num, size);
		
		double mean, median;
		
		if (size % 2 == 0){
			median = (double) (num[size/2] + num[size/2-1]) / 2;
		}
		
		else median = (double) num[size/2];
		
		mean = (double) total / size;
		
		printf("Case #%d:\n", i);
		printf("Mean : %.2lf\n", mean);
		printf("Median : %.2lf\n", median);
		
	}
	
	return 0;
}
