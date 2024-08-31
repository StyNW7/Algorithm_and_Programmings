#include <stdio.h>

int main(){
	
	int test;
	long long int male, female;
	
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		scanf("%lld %lld", &male, &female);
		if ((male * female) % 2 == 0){
			printf("Case #%d: Party time!\n", i);
		}
		else {
			printf("Case #%d: Need more frogs\n", i);
		}
		
	}
	
	return 0;
}
