#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		int size;
		scanf("%d", &size);
		
		long long int numbers[size][size];
		long long int total[size] = {0};
		
		for (int a = 0; a < size; a++){
			for (int b = 0; b < size; b++){
				scanf("%lld", &numbers[a][b]);
			}
		}
		
		for (int a = 0; a < size; a++){
			for (int b = 0; b < size; b++){
				total[a] += numbers[b][a];
			}
		}
		
		printf("Case #%d: ", i);
		
		for (int x = 0; x < size; x++){
			if (x + 1 == size){
				printf("%lld", total[x]);
			}
			
			else {
				printf("%lld ", total[x]);
			}
		}
		
		printf("\n");
		
	}
	
	return 0;
}
