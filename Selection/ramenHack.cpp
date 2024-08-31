#include <stdio.h>

int main(){
	
	int test;
	int a, b, c;
	
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		scanf("%d %d %d", &a, &b, &c);
		if (a <= b + c){
			printf("Case #%d: yes\n", i);
		}
		else {
			printf("Case #%d: no\n", i);
		}
	}
	
	return 0;
}
