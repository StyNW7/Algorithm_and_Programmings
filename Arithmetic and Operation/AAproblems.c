#include <stdio.h>

int main (){
	
	double ass, uts, uas;
	double hasil;
	
	scanf("%lf %lf %lf", &ass, &uts, &uas);
	
	hasil = (ass * 20 / 100) + (uts * 30 / 100) + (uas * 50 / 100);
	
	printf("%.2lf\n", hasil);
	
	return 0;
}


