#include <stdio.h>
#include <string.h>

int main() {
    
    long long int num;
    scanf("%lld", &num);
    long long int stonks = 0;
    long long int total = 0;
    
    for (long long int i = 0; i < num; i++){
    	scanf("%lld", &stonks);
    	
    	if (stonks > 0){
    		total += stonks;
		}
    	
	}
	
	printf("%lld\n", total);

    return 0;
}
