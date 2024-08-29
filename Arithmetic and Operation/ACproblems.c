#include <stdio.h>

int main(){
	
	int match;
	int score;
	
	scanf("%d", &match);
	
	score = (1 << match) - 1;
	
	printf("%d\n", score);
	
	return 0;
}
