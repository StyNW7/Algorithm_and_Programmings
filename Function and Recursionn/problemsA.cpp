#include <stdio.h>

int count = 0;

int formula(int num){
	
	if (num == 1){
		return 2;
	}
	
	if (num == 0) return 1;
	
	if (num % 3 == 0) count++;
	
	if  (num > 1 && num % 5 != 0){
		return formula(num-1) + num + formula (num-2) + num - 2;
		
		if (num - 1 % 3 == 0) count++;
		if (num - 2 % 3 == 0) count++;
		
	}
	
	else if (num % 5 == 0) {
		return num * 2;
	}
	
}

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		count = 0;
		int num;
		scanf("%d", &num);

		int result = formula(num);
		
		printf("Case #%d: %d %d\n", i, result, count);
	}
	
	return 0;
}
