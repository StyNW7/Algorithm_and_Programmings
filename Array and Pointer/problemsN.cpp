#include <stdio.h>
#include <string.h>

int main() {
    
    int test;
    scanf("%d", &test);
    
    for (int i = 0; i < test; i++){
    	
    	long long int num;
    	scanf("%lld", &num);
    	
    	long long int max1 = -1000001;
    	long long int max2 = -1000001;
    	long long int box [num];
    	long long int total;
    	int index;
    	
    	for (long long int j = 0; j < num; j++){
    		scanf("%lld", &box[j]);
    	}
    	
    	for (long long int x = 0; x < num; x++){
		
    		if (max1 < box[x]){
    			max1 = box[x];
    			index = x;
			}
			
		}
		
		box[index] = -1000001;
		
		for (long long int z = 0; z < num; z++){
			
			if (max2 < box[z]){
    			max2 = box[z];
			}
			
		}
		
		total = max1 + max2;
		
		printf("Case #%lld: %lld\n", i+1, total);
    	
	}
    
    return 0;
}
