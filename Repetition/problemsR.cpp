#include <stdio.h>
#include <math.h>

int main(){
	
	long long int test;
	long long int height = 0;
	long long int height1;
	long long int height2;
	long long int temp = 0;
	long long int house;
	long long int selisih1 = 999999;
	long long int selisih2 = 0;
	
	scanf("%lld", &test);
	
	for (long long int i = 1; i <= test; i++){
		
		scanf("%lld", &house);
		
		for (long long int j = 0; j < house; j++){
			
			if (house == 2){
				break;
			}
			
			temp = height;
			
			scanf("%lld", &height);
		
			if (height > temp){
				selisih2 = height - temp;
				if (selisih1 > selisih2){
					selisih1 = height - temp;
				}
			}
			
		}
		
		if (house == 2){
			scanf("%lld %lld", &height1, &height2);
			printf("Case #%llld: %lld\n", i, abs(height1 - height2));
		}
		
		else {
			printf("Case #%llld: %lld\n", i, selisih1);
			temp = 0;
			height = 0;
			selisih1 = 999999;
			selisih2 = 0;
		}
	
	}
	
	
	return 0;
}
