#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		int times;
		scanf("%d", &times);
		
		int sum = 1;
		int count = 0;
		
		printf("Case %d: ", i);
		
		for (int a = 0; a < times; a++){
			
			sum += count;
			count++;
			
			if (a + 1 == times){
				printf("%d", sum);
			}
			
			else {
				printf("%d ", sum);
			}

		}
		
		printf("\n");
		
	}
	
	return 0;
}
