#include <stdio.h>

int main (){
	
	long long int x;
	long long int total = 0;
	
	scanf("%lld", &x);
	
	for (long long int i = 0; i < x; i++){
		total += 100 + (50*i);
	}
	
	printf("%lld\n",  total);
	
	return 0;
}
