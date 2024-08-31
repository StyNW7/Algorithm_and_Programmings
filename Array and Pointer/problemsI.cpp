#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int number;
		scanf("%d", &number);
		
		int num[number];
		
		for (int x = 0; x < number; x++){
			scanf("%d", &num[x]);
		}
		
		printf("Case #%d: ", i+1);
		
		for (int a = number - 1; a >= 0; a--){
			
			if (a == 0){
				printf("%d", num[a]);
			}
			else {
				printf("%d ", num[a]);
			}
			
		}
		
		printf("\n");
		
	}
	
	return 0;
}
