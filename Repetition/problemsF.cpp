#include <stdio.h>

int main(){
	
	int n, m;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf("#");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (i % m == 0){
				printf("#");
			}
			else {
				printf(".");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (j % m == 0){
				printf("#");
			}
			else {
				printf(".");
			}
		}
		printf("\n");
	}
	
	return 0;
}
