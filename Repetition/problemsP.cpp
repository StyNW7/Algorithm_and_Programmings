#include <stdio.h>

int main() {
	
    int test;
    scanf("%d", &test);

    for (int i= 1; i <= test; i++) {
        int frog;
        int total = 0;
        int jump = 0;
        scanf("%d", &frog);
        
        while(total < frog){
        	jump++;
        	total += jump;
        	
		}
		
		printf("Case #%d: %d\n", i, jump);

    }
    
    return 0;
}
