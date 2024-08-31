#include <stdio.h>
#include <string.h>

int main() {
    
    int test;
    scanf("%d", &test);
    
    for (int i = 0; i < test; i++){
    	
    	int num;
    	scanf("%d", &num);
    	
    	int max1 = 0;
    	int max2 = 0;
    	int box [num];
    	int total;
    	int index;
    	
    	for (int j = 0; j < num; j++){
    		scanf("%d", &box[j]);
    	}
    	
    	for (int x = 0; x < num; x++){
		
    		if (max1 < box[x]){
    			max1 = box[x];
    			index = x;
			}
			
		}
		
		for (int a = index; a < num - 1; a++) {
            box[a] = box[a + 1];
        }

        num--;
		
		for (int z = 0; z < num; z++){
			
			if (max2 < box[z] && max2 != box[z]){
    			max2 = box[z];
			}
			
		}
		
		total = max1 + max2;
		
		printf("Case #%d: %d\n", i+1, total);
    	
	}
    
    return 0;
}
