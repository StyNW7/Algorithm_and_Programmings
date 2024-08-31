#include <stdio.h>
#include <math.h>

int main(){
	
	long long int match;
	long long int score;
	
	scanf("%lld", &match);
	
	score = pow(2, match) - 1;
	
	printf("%lld\n", score);
	
	return 0;
}
