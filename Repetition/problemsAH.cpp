#include <stdio.h>
#include <string.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		char num[15];
		scanf("%s", num);
		
		printf("Case #%d: %d\n", i, strlen(num));
		
	}
	
	return 0;
}
