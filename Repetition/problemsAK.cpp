#include <stdio.h>

int main(){
	
	int size;
	scanf("%d", &size);
	
	int stairs[size];
	
	for (int i = 0; i < size; i++){
		scanf("%d", &stairs[i]);
	}
	
	int start = 1;
	
	for (int a = 0; a < size; a++){
		
		if (stairs[a] + 1 == stairs[a+1]){
			continue;
		}
		
		else {
			
			if (a + 1 == size){
				printf("%d", stairs[a]);
			}
			
			else {
				printf("%d ", stairs[a]);
			}
			
		}
		
	}
	
	printf("\n");
	
	return 0;
}
