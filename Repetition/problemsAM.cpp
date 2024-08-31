#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int number;
		scanf("%d", &number);
		
		printf("Case #%d:\n", i+1);
		
		for (int j = 1; j <= number; j++){
			
			if ((j % 3 == 0 || j % 5 == 0) && j % 15 != 0){
				printf("%d Jojo\n", j);
			}
			
			else {
				printf("%d Lili\n", j);
			}
			
		}
		
	}
	
	return 0;
}
