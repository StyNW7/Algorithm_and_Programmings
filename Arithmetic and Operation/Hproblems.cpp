#include <stdio.h>

int main(){
	
	double a, b, c, d;
	double hasil = 0;
	
	double a1, b1, c1, d1;
	double hasil1 = 0;
	
	double a2, b2, c2, d2;
	double hasil2 = 0;
	
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	
	scanf("%lf %lf %lf %lf", &a1, &b1, &c1, &d1);
	
	scanf("%lf %lf %lf %lf", &a2, &b2, &c2, &d2);
	
	hasil += (a*2) + (b*2) + (c*2) + d;
	
	hasil1 += (a1*2) + (b1*2) + (c1*2) + d1;
	
	hasil2 += (a2*2) + (b2*2) + (c2*2) + d2;
	
	printf("%.2lf\n", hasil);
	
	printf("%.2lf\n", hasil1);
	
	printf("%.2lf\n", hasil2);
	
	return 0;
}
