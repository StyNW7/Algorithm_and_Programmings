#include <stdio.h>
#include <math.h>

int main(){
	
	int num1, num2, num3;
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

    num1 = (int)(num1/pow(10,3/2)) % 10;
    num2 = (int)(num2/pow(10,3/2)) % 10;
    num3 = (int)(num3/pow(10,3/2)) % 10;
    
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
	
	return 0;
}
