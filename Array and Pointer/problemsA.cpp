#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	int views;
	scanf("%d", &views);
	
	int viewer[views];
	
	for (int i = 0; i < views; i++){
		scanf("%d", &viewer[i]);
	}

	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int num1, num2;
		scanf("%d %d", &num1, &num2);
		int counter = 0;
		
		for (int j = num1-1; j <= num2 - 1; j++){
			
			counter += viewer[j];
			
		}
		
		printf("Case #%d: %d\n", i+1, counter);
		
	}
	
	return 0;
}
