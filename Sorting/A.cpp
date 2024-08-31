#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
	
	int size;
	scanf("%d", &size);
	
	int num[size];
	for (int i = 0; i < size; i++) scanf("%d", &nums[i]);
	
	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (nums[j] > nums[j+1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    
    int max = 0;
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (nums[j] > nums[j+1]) {
                
            }
        }
    }
	
	return 0;
}
