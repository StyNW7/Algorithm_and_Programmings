#include <stdio.h>

int main(){
	
	int d, s, t;

	scanf("%d %d %d", &d, &s, &t);
	
	if (d > s){
		
		if (d > t){
			if (t > s){
				printf("Daging\n");
				printf("Telur\n");
				printf("Sayur\n");
			}
			else {
				printf("Daging\n");
				printf("Sayur\n");
				printf("Telur\n");
			}
		}
		
		else {
			printf("Telur\n");
			printf("Daging\n");
			printf("Sayur\n");
		}
		
	}
	
	else {
		
		if (s > t){
			
			if (d > t){
				printf("Sayur\n");
				printf("Daging\n");
				printf("Telur\n");
			}
			
			else {
				printf("Sayur\n");
				printf("Telur\n");
				printf("Daging\n");
			}
			
		}
		
		else {
			printf("Telur\n");
			printf("Sayur\n");
			printf("Daging\n");
		}
		
	}
	
	return 0;
}

