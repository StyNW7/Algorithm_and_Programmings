#include <stdio.h>

int main (){
	
	double physical, magic, trueDamage;
	double hasil;
	
	scanf("%lf %lf %lf", &physical, &magic, &trueDamage);
	
	hasil = (physical * 20 / 100) + (magic * 30 / 100) + (trueDamage * 50 / 100);
	
	printf("%.2lf\n", hasil);
	
	return 0;
}


