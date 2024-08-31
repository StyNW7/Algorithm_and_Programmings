#include <stdio.h>

int main(){
	
	int size;
	scanf("%d", &size);
	
	int temp;
	int checker[1001] = {0};
	
	for (int i = 0; i < size; i++){
		scanf("%d", &temp);
		int index = temp - 1;
		checker[index] += 1;
	}
	
	int count = 0;
	
	for (int i = 0; i < 1001; i++){
		if (count < checker[i]){
			count = checker[i];
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
