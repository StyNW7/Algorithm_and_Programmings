#include <stdio.h>
#include <string.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		int size;
		scanf("%d", &size);
		
		int sum = 0;
		
		for (int x = 0; x < size; x++){
			int temp;
			scanf("%d", &temp);
			sum += temp;
		}
		
		printf("Case #%d: %d\n", i, sum);
		
	}
	
	return 0;
}
