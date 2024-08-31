#include <stdio.h>

int counter = 0;

int fibbonaci (int num){
	
	counter++;
	
	if (num <= 1) return num;
	else return fibbonaci (num-1) + fibbonaci (num-2);
	
}

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		int num;
		counter = 0;
		scanf("%d", &num);
		fibbonaci(num);
		printf("Case #%d: %d\n", i, counter);
		
	}
	
	return 0;
}
