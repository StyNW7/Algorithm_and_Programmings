#include <stdio.h>

int main(){
	
	double money, price;
	char persen = '%';
	
	scanf("%lf %lf", &money, &price);
	
	printf("%.2lf%c\n", money/price*100, persen);
	
	return 0;
}
