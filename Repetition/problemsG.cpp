#include <stdio.h>

int main(){
	
	int test;
	int jumlah;
	int total = 0;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		scanf("%d", &jumlah);
		total += jumlah;
	}
	
	printf("%d\n", total);
	
	return 0;
}
