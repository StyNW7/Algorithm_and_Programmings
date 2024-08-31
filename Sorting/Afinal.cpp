#include <stdio.h>

void merge (long long int arr[], int left, int mid, int right){
	
	int n1 = mid - left + 1;
	int n2 = right - mid;
	
	long long int kiri[n1], kanan[n2];
	
	for (int i = 0; i < n1; i++) kiri[i] = arr[left + i];
	for (int j = 0; j < n2; j++) kanan[j] = arr[mid + j + 1];
	
	int i = 0, j = 0, k = left;
	
	while (i < n1 && j < n2){
		if (kiri[i] <= kanan[j]){
			arr[k] = kiri[i];
			i++;
		}
		else {
			arr[k] = kanan[j];
			j++;
		}
		k++;
	}
	
	while (i < n1){
		arr[k] = kiri[i];
		i++;
		k++;
	}
	
	while (j < n2){
		arr[k] = kanan[j];
		j++;
		k++;
	}
	
}

void mergeSort (long long int arr[], int left, int right){
	if (left < right){
		int mid = left + (right- left) / 2;
		mergeSort (arr, left, mid);
		mergeSort (arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}

struct Paired{
	long long int num1;
	long long int num2;
};

int main(){
	
	int size;
	scanf ("%d", &size);
	
	long long int nums[size];
	for (int i = 0; i < size; i++) scanf ("%lld", &nums[i]);
	
	mergeSort (nums, 0, size-1);
	
	long long int max = -1;
	Paired pairs[size];
	int counter = 0;
	
	for (int i = 1; i < size; i++){
		
		long long int selisih = nums[i] - nums[i-1];
		
		if (selisih > max){
			max = selisih;
			counter = 0;
		}
		
		if (selisih == max){
			pairs [counter].num1 = nums[i-1];
			pairs [counter].num2 = nums[i];
			counter++;
		}
		
	}
	
	for (int i = 0; i < counter; i++){
		if (i + 1 == counter) printf ("%lld %lld\n", pairs[i].num1, pairs[i].num2);
		else printf ("%lld %lld ", pairs[i].num1, pairs[i].num2);
	}
	
	return 0;
}
