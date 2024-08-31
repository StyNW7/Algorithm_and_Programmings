#include <stdio.h>

int main(){
	
	char alphabet[4];
	int num[4];
	int index;
	int temp = 0;

	scanf("%c %c %c", &alphabet[0], &alphabet[1], &alphabet[2]);
	
	for (int i = 0; i < 3; i++){
		num[i] = int(alphabet[i]);
	}

	if (num[0] > num[1]){
		
		if (num[0] > num[2]){
			
			if (num[1] > num[2]){
				printf("3 2 1\n");
			}
			
			else {
				printf("2 3 1\n");
			}
		}
		
		else {
			printf("2 1 3\n");
		}
		
	}
	
	else {
		
		if (num[1] > num[2]){
			
			if (num[2] > num[0]){
				printf("1 3 2\n");
			}
			
			else {
				printf("3 1 2\n");
			}
			
		}
		
		else {
			printf("1 2 3\n");
		}
		
	}
	
	return 0;
}

