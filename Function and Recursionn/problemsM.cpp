#include <stdio.h>

int  func (int num){
	
	if (num == 1){
		return num;
	}
	
	else if (num % 2 == 0){
		num /= 2;
		return func(num);
	}
	
	else {
		num = num * 3 + 1;
		return func (num);
	}
	
}

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		int num, checker;
		scanf("%d %d", &num, &checker);
		
		int result= 0;
		
		while (result != checker){
			result = func (num);
			if (result == checker) {
				printf("Case #%d: YES\n", i);
				break;
			}
			if (result == 1){
				break;
			}
		}
		
		if (result != checker) {
			printf("Case #%d: NO\n", i);
		}
		
	}
	
	return 0;
}
