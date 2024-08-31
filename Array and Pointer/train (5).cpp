#include<stdio.h>

int main(){
	
	int totalDays;
	scanf("%d", &totalDays);
	
	int totalJunk[100];
	
	for(int i = 0; i < totalDays; i++){
		scanf("%d", &totalJunk[i]);
	}
	
	int day = 0, min = 99999999;
	
	for(int i = 0; i < totalDays; i++){
		if(totalJunk[i] < min){
		
			min = totalJunk[i];
			
			day = i;
		}
	}
	
	printf("Ready to launch on day %d\n", day);
	
	return 0;
}
