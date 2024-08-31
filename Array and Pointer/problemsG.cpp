#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int number;
		scanf("%d", &number);
		
		int space[number];
		int test[number];
		int counter = 0;
		
		for (int j = 0; j < number; j++){
			scanf("%d", &space[j]);
		}
		
		for (int k = 0; k < number; k++){
			scanf("%d", &test[k]);
		}
		
		for (int x = 0; x < number; x++){
			if (space[x] < test[x]){
				counter += 1;
			}
		}
		
		printf("Case #%d: %d\n", i+1, counter);
		
	}
	
	return 0;
}
