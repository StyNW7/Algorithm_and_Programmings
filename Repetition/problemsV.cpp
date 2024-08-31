#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	getchar();
	
	for (int i = 0; i < test; i++){
		
		int x;
		scanf("%d", &x);
		
		for (int a = 0; a < x; a++){
			for (int b = 0; b < x; b++){
				if (a == 0 || b == 0 || x-1 == a || x-1 == b || a == b || b == x-1-a){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		
		printf("\n");
		
	}
	
	return 0;
}
