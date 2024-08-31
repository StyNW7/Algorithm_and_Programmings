#include <stdio.h>

void swap (long long int *a, long long int *b){
	long long int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort (long long int arr[], int size){
	bool flag = false;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size - i - 1; j++){
			if (arr[j] < arr[j+1]){
				swap (&arr[j], &arr[j+1]);
				flag = true;
			}
		}
		if (!flag) break;
	}
}

int main(){
	
	int size;
	scanf ("%d", &size);
	
	long long int boss[size];
	
	for (int i = 0; i < size; i++) scanf ("%lld", &boss[i]);
	
	bubbleSort (boss, size);
	
	long long int power;
	scanf ("%lld", &power);
	
	int count = 0;
	
	for (int x = 0; x < size; x++){
		if (power - boss[x] >= 0){
			count++;
			power -= boss[x];
		}
		else break;
	}
	
	printf ("%d\n", count);
	
	return 0;
}
