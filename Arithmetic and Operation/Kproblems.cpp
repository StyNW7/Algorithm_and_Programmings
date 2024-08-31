#include <stdio.h>

int main(){
	
	double num;
	double persentase;
	double temp1, temp2, final;
	
	scanf("%lf %lf", &num, &persentase);
	
	temp1 = num + (num*persentase/100);
	
	temp2 = temp1 + (temp1*persentase/100);
	
	final = temp2 + (temp2*persentase/100);
	
	printf("%.2lf\n", final);
	
	return 0;
}
