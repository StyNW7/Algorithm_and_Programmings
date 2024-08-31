#include <stdio.h>

int main(){
	
	int test;
	int num1, num2, num3;
	int count = 0;
	
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		scanf("%d %d %d", &num1, &num2, &num3);
		
		if (num2 > num3){
			count += 1;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
