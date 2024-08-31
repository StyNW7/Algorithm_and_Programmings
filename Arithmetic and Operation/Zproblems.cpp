#include <stdio.h>

int main(){
	
	int t;
	
	double a, b, c, d;
	double hasil = 0;
	
	double a1, b1, c1, d1;
	double hasil1 = 0;
	
	double a2, b2, c2, d2;
	double hasil2 = 0;
	
	scanf("%d", &t);
	
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	
	scanf("%lf %lf %lf %lf", &a1, &b1, &c1, &d1);
	
	scanf("%lf %lf %lf %lf", &a2, &b2, &c2, &d2);
	
	hasil += (a*2) + (b*2) + (c*4/3) + d/2;
	
	hasil1 += (a1*2) + (b1*2) + (c1*4/3) + d1/2;
	
	hasil2 += (a2*2) + (b2*2) + (c2*4/3) + d2/2;
	
	printf("%.2lf\n", hasil);
	
	printf("%.2lf\n", hasil1);
	
	printf("%.2lf\n", hasil2);
	
	return 0;
}
