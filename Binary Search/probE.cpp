#include <stdio.h>

long long int findMaxLength(long long limit, int size, long long arr[]){
	long long max = -1;
	long long currentSum = 0;
	int start = 0;
	for(int end = 0; end < size; end++){
		currentSum += arr[end];
		while(currentSum > limit){
			currentSum -= arr[start];
			start++;
		}
		max = (end-start+1) > max? end-start+1:max; 
	}
	return max;
}

int main(){
	int size;
	scanf("%d", &size);
	long long arr[size];
	for(int i = 0; i < size; i++){
		scanf("%lld", &arr[i]);
	}
	int tc;
	scanf("%d", &tc);
	for(int j = 1; j <= tc; j++){
		long long limit;
		scanf("%lld", &limit);
		long long result = findMaxLength(limit, size, arr);
		if(!result) result = -1;
		printf("Case #%d: %lld\n", j, result);
	}
	return 0;
}
/*
5
1 2 3 4 5
4
1
6
3
5
*/
