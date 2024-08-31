#include <stdio.h>

int main(){
	
    int num;
    scanf("%d", &num);
    int res = 2;
    
    if (num == 1){
    	printf("1");
	}
    
    while (num > 1){
    	
        if (num % res == 0){
        	if (num / res == 1){
        		printf("%d", res);
        		num /= res;
            	break;
			}
			else {
				num /= res;
				printf("%d ", res);
			}
        }
        
        else {
        	res++;
		}
		
    }
	
	printf("\n");
    
    return 0;
    
}
