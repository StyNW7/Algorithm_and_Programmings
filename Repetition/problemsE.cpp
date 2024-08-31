#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int a = 1; a <= test; a++){
		
		int num, position;
		scanf("%d %d", &num, &position);
		
		int binary[32];
		int index = 0;
		
		while (num > 0){
			binary[index++] = num % 2;
			num /= 2;
		}
		
		if (binary[position] == 1){
			printf("1\n");
		}
		else printf("0\n");
		
	}
	
	return 0;
}
