#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		int segitiga;
		scanf("%d", &segitiga);
		printf("Case #%d:\n", i+1);
		for (int j = 1; j <= segitiga; j++){
			
			for (int k = 1; k <= j; k++){
				
				if (j != k){
					printf(" ");
				}
				
				else {
					
					if (segitiga % 2 == 0){
					if (k % 2 == 0){
						printf("*");
					}
	
					else{
						printf("#");
					}
					
					}
					
					else {
						if (k % 2 == 0){
							printf("#");
						}
		
						else{
							printf("*");
						}
					}
				}
				
			}
			printf("\n");
		}

	}
	
	return 0;
	
}
