#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		for (int j = 0; j < test; j++){
			printf("*");
		}
		puts("");
	}

	return 0;
}
