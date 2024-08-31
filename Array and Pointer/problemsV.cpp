#include <stdio.h>

int main(){
	
	int test;
	
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int num;
		scanf("%d", &num);
		
		int numbers[num];
		
		for (int a = 0; a < num; a++){
			scanf("%d", &numbers[a]);
		}
		
		int counter[num] = {0};
		
		for (int x = 0; x < num; x++){
			for (int y = 0; y < num; y++){
				
				for (int z = 0; z < num; z++){
					
					if (numbers[x] == (numbers[y] + numbers[z])){
						counter[x] = 1;
					}
					
				}
				
			}
		}
		
		int factor;
		
		for (int a = 0; a < num; a++){
			factor += counter[a];
		}
		
		printf("Case #%d: %d\n", i+1, factor);
		
	}
	
	return 0;
}
