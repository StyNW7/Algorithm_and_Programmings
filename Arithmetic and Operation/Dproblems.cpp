#include <stdio.h>

int main (){
	
	int num1, num2;
	
	scanf("%d %d", &num1, &num2);
	
	for (int i = 0; i < num2+1; i++){
		printf("%d\n", num1+i);
	}
	
	return 0;
}
