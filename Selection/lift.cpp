#include <stdio.h>

int main(){
	
	int lift1, lift2, lift3;
	int time1, time2;
	
	scanf("%d %d %d", &lift1, &lift2, &lift3);
	
	if (lift1 > lift2){
		printf("-1\n");
	}
	
	else {
		time1 = lift3 - lift1;
		time2 = lift2 - lift3;
		
		if (time1 == time2){
			printf("%d\n", time1);
		}
		
		else {
			printf("-1\n");
		}
		
	}
	
	return 0;
}

