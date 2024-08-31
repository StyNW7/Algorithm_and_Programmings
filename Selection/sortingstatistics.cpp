#include <stdio.h>

int main(){
	
	double num[100];
	
	for (int i = 0; i < 50; i++){
		scanf("%lf", &num[i]);
	}
	
	for (int j = 0; j < 50; j++){
		printf("%.2lf, ", num[j]);
	}
	
	return 0;
}

