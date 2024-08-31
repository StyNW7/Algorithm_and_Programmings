#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	int sum = 0;
	
	for (int i = 1; i <= test; i++){
		int temp;
		scanf("%d", &temp);
		sum += temp;
	}
	
	printf("%d\n", sum);
	
	return 0;
}
