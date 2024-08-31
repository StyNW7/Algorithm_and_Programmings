#include <stdio.h>

int main() {
	
    long long int test;
    scanf("%lld", &test);

    for (long long int i= 1; i <= test; i++) {
        long long int menu, money;
        long long int total = 0;
    	long long int items;
        scanf("%lld %lld", &menu, &money);
        
        for (long long int j = 0; j < menu; j++){
        	scanf("%lld", &items);
        	total += items;
		}

        if (total > money){
        	printf("Case #%lld: Wash dishes\n", i);
		}
		
		else {
        	printf("Case #%lld: No worries\n", i);
		}

    }
    
    return 0;
}
