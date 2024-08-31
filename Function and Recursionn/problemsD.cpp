#include <stdio.h>

int formula(int num){
	
	if (num == 1){
		return 1;
	}
	
	if  (num > 1 && num % 2 == 0){
		return formula(num / 2);
	}
	
	else {
		return formula (num-1) + formula(num + 1);
	}
	
}

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		int num;
		scanf("%d", &num);
		
		int result = formula(num);
		
		printf("Case #%d: %d\n", i, result);
	}
	
	return 0;
}
