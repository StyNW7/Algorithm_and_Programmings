#include <stdio.h>

int main() {
    
    int test;
    scanf("%d", &test);
    int triangle;
    scanf("%d", &triangle);

    for (int i = 1; i <= test; i++) {
    	
    	int space = triangle - 1;
    	int stars = 1;
    	
    	for (int x = 0; x < triangle; x++){
    		
    		for (int j = 1; j <= space; j++) {
	            printf(" ");
	        }
	        
	        for (int j = 1; j <= stars; j++) {
	            printf("*");
	        }
	        
	        space--;
	        stars++;
	        
	        printf("\n");
    		
		}
        
    }

    return 0;
}
