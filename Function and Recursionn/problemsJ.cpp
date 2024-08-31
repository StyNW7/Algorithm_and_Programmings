#include <stdio.h>

int count = 0;

int formula(int num){
	
	if (num == 1) return 1;
	
	if (num % 2 == 0){
		count++;
		return formula(num / 2);
	}
	
	else {
		count++;
		return formula(num*3 + 1);
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
		
		if (count % 2 == 0) printf("Case #%d: Lili\n", i);
		else printf("Case #%d: Jojo\n", i);
		
	}
	
	return 0;
}
