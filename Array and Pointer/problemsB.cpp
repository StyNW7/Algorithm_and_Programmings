#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int size;
		scanf("%d", &size);
		
		int need[size];
		int have[size];
		
		for (int a = 0; a < size; a++){
			scanf("%d", &need[a]);
		}
		
		for (int a = 0; a < size; a++){
			scanf("%d", &have[a]);
		}
		
		int result[size];
		
		printf("Case #%d: ", i+1);
		
		for (int a = 0; a < size; a++){
			
			result[a] = need[a] - have[a];
			
			if (a + 1 == size){
				printf("%d", result[a]);
			}
			
			else {
				printf("%d ", result[a]);
			}
			
		}
		
		printf("\n");
		
	}
	
	return 0;
}
