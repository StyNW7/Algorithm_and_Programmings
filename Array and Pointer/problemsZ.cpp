#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		int n, k, kiri, kanan;
		char stair [10009];
		
		scanf ("%d %d", &n, &k);
		scanf ("%s", stair);
		
		kiri = kanan = -1;
		
		for (int x = 0; x < n; x++){
			if (stair[x] == '1'){
				kiri = x;
				break;
			}
		}
		
		for (int x = n-1; x >= 0; x--){
			if (stair[x] == '1'){
				kanan = x;
				break;
			}
		}
		
		if ((kiri == kanan) && k >= n){
			printf("Case #%d: Alive\n", i);
		}
		
		else if (kiri != kanan && (kiri+1) <= k && (n-kanan) <= k){
			printf("Case #%d: Alive\n", i);
		}
		
		else printf("Case #%d: Dead\n", i);
		
	}
	
	return 0;
}
