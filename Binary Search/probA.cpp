#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int m = left + (right - left) / 2;
        
        if (arr[m] == target) {
            if (m > 0 && arr[m] == arr[m - 1]) {
                return binarySearch(arr, left, m - 1, target);
            } else {
                return m;
            }
        } else if (arr[m] < target) {
            return binarySearch(arr, m + 1, right, target);
        } else {
            return binarySearch(arr, left, m - 1, target);
        }
    }
    
    return -1;
}


int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	int A[N];
	for(int i = 0; i < N; ++i){
		scanf("%d", &A[i]);
	}
	for(int i = 0; i < M; ++i){
		int search;
		scanf("%d", &search);
		int result = binarySearch(A, 0, N, search);
		if(result == -1){
			printf("%d\n", result);
		}else{
			printf("%d\n", ++result);
		}
	}
	return 0;
}
