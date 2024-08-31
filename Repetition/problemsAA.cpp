#include <stdio.h>
#include <math.h>

int main(){
	
	int test;
	int sum = 0;
	int dice;
	
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		scanf("%d", &dice);
		sum += dice;
		
		if (sum == 9){
			sum = 21;
		}
		else if (sum == 33){
			sum = 42;
		}
		else if (sum == 76){
			sum = 92;
		}
		else if (sum == 53){
			sum = 37;
		}
		else if (sum == 80){
			sum = 59;
		}
		else if (sum == 97){
			sum = 88;
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
