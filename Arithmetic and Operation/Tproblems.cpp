#include <stdio.h>

int main(){
	
	char course[100];
	int hour1;
	int minute1;
	int hour2;
	int minute2;
	
	char course2[100];
	int hour3;
	int minute3;
	int hour4;
	int minute4;
	
	char course3[100];
	int hour5;
	int minute5;
	int hour6;
	int minute6;
	
	char course4[100];
	int hour7;
	int minute7;
	int hour8;
	int minute8;
	
	char course5[100];
	int hour9;
	int minute9;
	int hour0;
	int minute0;
	
	scanf("%s %d:%d-%d:%d", course, &hour1, &minute1, &hour2, &minute2);
	getchar();
	scanf("%s %d:%d-%d:%d", course2, &hour3, &minute3, &hour4, &minute4);
	getchar();
	scanf("%s %d:%d-%d:%d", course3, &hour5, &minute5, &hour6, &minute6);
	getchar();
	scanf("%s %d:%d-%d:%d", course4, &hour7, &minute7, &hour8, &minute8);
	getchar();
	scanf("%s %d:%d-%d:%d", course5, &hour9, &minute9, &hour0, &minute0);
	getchar();
	
	
	printf("%s %02d:%02d-%02d:%02d\n", course, hour1-1, minute1, hour2-1, minute2);
	printf("%s %02d:%02d-%02d:%02d\n", course2, hour3-1, minute3, hour4-1, minute4);
	printf("%s %02d:%02d-%02d:%02d\n", course3, hour5-1, minute5, hour6-1, minute6);
	printf("%s %02d:%02d-%02d:%02d\n", course4, hour7-1, minute7, hour8-1, minute8);
	printf("%s %02d:%02d-%02d:%02d\n", course5, hour9-1, minute9, hour0-1, minute0);
	
	
	
	return 0;
}
