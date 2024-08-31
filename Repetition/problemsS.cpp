#include <stdio.h>

int main(){
	
	long long int power;
	long long test;
	long long int ballon;
	long long int count = 0;
	long long int num;
	
	scanf("%lld %lld", &test, &power);
	
	for (long long int i = 0; i < test; i++){
		scanf("%lld", &ballon);
		
		if (ballon < power){
			count += 1;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
