#include <stdio.h>

int main(){
	
	long long int num;
	scanf("%lld", &num);
	long long int counter = 0;
	
	for (long long int i = 0; i <= num; i++){
		for (long long int j = 0; j <= num; j++){
			for (long long int k = 0; k <= num; k++){
				for (long long int l = 0; l <= num; l++){
					if (i + j + k + l == num){
						counter++;
					}
				}
			}
		}
	}
	
	printf("%lld\n", counter);
	
	return 0;
}
