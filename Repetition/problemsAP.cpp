#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	int test;
	int a,b,c,d,e,f;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
		getchar();
		
		printf("Case #%d: ", i+1);
		
		for (int j = 0; j < a; j++){
			printf("a");
		}
		
		for (int j = 0; j < b; j++){
			printf("s");
		}
		
		for (int j = 0; j < c; j++){
			printf("h");
		}
		
		for (int j = 0; j < d; j++){
			printf("i");
		}
		
		for (int j = 0; j < e; j++){
			printf("a");
		}
		
		for (int j = 0; j < f; j++){
			printf("p");
		}
		
		printf("\n");
		
	}
	
	return 0;
}
