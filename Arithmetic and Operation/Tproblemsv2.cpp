#include <stdio.h>
#include <iostream>
#include <string>

int main(){
	
	string course[100];
	int hour1[100];
	int minute1[100];
	int hour2[100];
	int minute2[100];
	
	for (int i = 0; i < 5; i++){
		scanf("%s %d:%d-%d:%d", course[i], &hour1[i], &minute1[i], &hour2[i], &minute2[i]);
	}
	
	for (int i = 0; i < 5; i++){
		printf("%s %02d:%02d-%02d:%02d\n", course[i], hour1[i]-1, minute1[i], hour2[i]-1, minute2[i]);
	}
	
	return 0;
}
