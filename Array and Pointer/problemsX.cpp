#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		int row, coloumn;
		scanf("%d %d", &row, &coloumn);
		
		long long int sum = 0;

		for (int a = 0; a < row; a++){
			
			long long int temp = 0;
			long long int max = 0;
			
			for (int b = 0; b < coloumn; b++){
				
				scanf("%lld", &temp);
				
				if (max < temp){
					max = temp;
				}
				
			}
			
			sum += max;
			
		}
		
		printf("Case #%d: %lld\n", i, sum);
		
	}
	
	return 0;
}
