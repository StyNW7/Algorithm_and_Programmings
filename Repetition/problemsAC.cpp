#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int candy, money;
		scanf("%d %d", &candy, &money);
		int price;
		int temp = 999999;
		int total = 0;
		
		for (int j = 0; j < candy; j++){
			
			scanf("%d", &price);
			
			if (temp > price){
				temp = price;
			}
			
		}
		
		total = money / temp;
		
		printf("Case #%d: %d\n", i+1, total);
		
	}
	
	return 0;
}
