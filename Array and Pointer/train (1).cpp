#include <stdio.h>

int main(){
	
    int num;
    scanf("%d", &num);
    int res = 2;
    
    for (int i = 2; i <= num; i++){
    	
    	int number = i;
    	int counter = 0;
    	
    	while (num % i == 0){
    		num /= i;
    		counter++;
		}
		
		if (counter == 1){
			printf("%d", number);
		}
		
		else if (counter > 1){
			printf("%d^%d", number, counter);
		}
		
		if (num > 0 && counter > 0){
			printf(" x ");
		}
    	
	}
	
	puts("");
    
    return 0;
    
}
