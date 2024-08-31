#include <stdio.h>

int main() {
    
    int test;
    scanf("%d", &test);
    
    for (int i = 1; i <= test; i++){
    	
    	int size;
    	scanf("%d", &size);
    	
    	int house[size];
    	
    	for (int a = 0; a < size; a++){
    		scanf("%d", &house[a]);
		}
		
		int min = 999999999;
		
		for (int x = 0; x < size; x++){
			
			int temp = house[x] - house[x+1];
			if (temp < 0){
				temp *= -1;
			}
			
			if (min > temp){
				min = temp;
			}
			
		}
		
		printf("Case #%d: %d\n", i, min);
    	
	}

    return 0;
}
