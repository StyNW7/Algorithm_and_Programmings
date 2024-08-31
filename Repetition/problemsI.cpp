#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int rata;
	int temp;
	int total = 0;
	
	for (int i = 0; i < test; i++){
		scanf("%d", &temp);
		total += temp;
	}
	
	total = total + a+ b + c;
	
	rata = total / (test+3);
	
	if (a >= rata){
		printf("Jojo lolos\n");
	}
	
	else {
		printf("Jojo tidak lolos\n");
	}
	
	if (b >= rata){
		printf("Lili lolos\n");
	}
	
	else {
		printf("Lili tidak lolos\n");
	}
	
	if (c >= rata){
		printf("Bibi lolos\n");
	}
	
	else {
		printf("Bibi tidak lolos\n");
	}

	return 0;
}
