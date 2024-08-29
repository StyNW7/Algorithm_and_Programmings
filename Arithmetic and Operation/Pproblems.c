#include <stdio.h>

int main (){
	
	double hargaAwal = 1;
	double persentase;
	double hargaAkhir;
	double temp;
	double hargaAsli;
	
	double persentase2;
	double hargaAkhir2;
	double temp2;
	double hargaAsli2;
	
	double persentase3;
	double hargaAkhir3;
	double temp3;
	double hargaAsli3;
	
	double persentase4;
	double hargaAkhir4;
	double temp4;
	double hargaAsli4;
	
	scanf("%lf %lf", &persentase, &hargaAkhir);
	scanf("%lf %lf", &persentase2, &hargaAkhir2);
	scanf("%lf %lf", &persentase3, &hargaAkhir3);
	scanf("%lf %lf", &persentase4, &hargaAkhir4);
	
	temp = hargaAwal - (hargaAwal * persentase / 100);
	
	hargaAsli = hargaAkhir / temp;
	
	printf("$%.2lf\n", hargaAsli);
	
	
	temp2 = hargaAwal - (hargaAwal * persentase2 / 100);
	
	hargaAsli2 = hargaAkhir2 / temp2;
	
	printf("$%.2lf\n", hargaAsli2);
	
	
	temp3 = hargaAwal - (hargaAwal * persentase3 / 100);
	
	hargaAsli3 = hargaAkhir3 / temp3;
	
	printf("$%.2lf\n", hargaAsli3);
	
	
	temp4 = hargaAwal - (hargaAwal * persentase4 / 100);
	
	hargaAsli4 = hargaAkhir4 / temp4;
	
	printf("$%.2lf\n", hargaAsli4);
	
	
	return 0;
}


