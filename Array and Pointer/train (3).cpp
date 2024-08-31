#include <stdio.h>

int main(){
	
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int res = 1;
    while (1){
        if (res % n1 == 0 && res % n2 ==0){
            printf("%d\n", res);
            break;
        }
        res++;
    }
    
    return 0;
    
}
