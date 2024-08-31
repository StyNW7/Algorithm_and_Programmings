#include <stdio.h>

int main(){
	
	int test;
	int harga, persentase, max;
	int diskon;
	
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		scanf("%d %d %d", &harga, &persentase, &max);
		
		diskon = harga * persentase / 100;
		
		if (diskon > max){
			diskon = max;
			printf("Case #%d: %d\n", i, diskon);
		}
		
		else {
			printf("Case #%d: %d\n", i, diskon);
		}
		
	}
	
	return 0;
}

