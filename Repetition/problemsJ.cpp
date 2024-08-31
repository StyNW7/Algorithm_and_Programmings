#include <stdio.h>

int main(){
	
	long long int test;
	long long int jumlah;
	scanf("%lld", &test);
	
	for (long long int i = 0; i < test; i++){
		long long int banyak;
		long long int total = 0;
		scanf("%lld", &banyak);
		for (long long int j = 0; j < banyak; j++){
			scanf("%lld", &jumlah);
			total += jumlah;
		}
		printf("Case #%lld: %lld\n", i+1, total);
	}
	
	return 0;
}
