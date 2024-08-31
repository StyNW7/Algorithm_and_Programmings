#include <stdio.h>

int main(){
	
	int test;
	int a, b;
	
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		scanf("%d %d", &a, &b);
		if (a > b){
			printf("Case #%d: Go-Jo\n", i);
		}
		else {
			printf("Case #%d: Bi-Pay\n", i);
		}
	}
	
	return 0;
}
