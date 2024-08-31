#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		int halaman, x;
		scanf("%d %d", &halaman, &x);
		
		int max = 0;
		int belakang = 0;
		int depan = 0;
		
		if (halaman == x || x == 1){
			printf("Case #%d: 0\n", i);
			continue;
		}
		
		if (halaman % 2 == 0){
			
			belakang = (halaman - x) / 2;
			int temp = (halaman - x) % 2;
			belakang += temp;
			
			if (belakang == 0) belakang = 1;
			
			depan = (x - 1) / 2;
			temp = (x - 1) % 2;
			depan += temp;
			
		}
		
		else {
			
			if (halaman - 1 == x){
				printf("Case #%d: 0\n", i);
				continue;
			}
			
			belakang = (halaman - 1 - x) / 2;
			int temp = (halaman - 1 - x) % 2;
			belakang += temp;
			
			
			depan = (x - 1) / 2;
			temp = (x - 1) % 2;
			depan += temp;
			
		}
		
		if (depan < belakang) max = depan;
		else max = belakang;
		
		printf("Case #%d: %d\n", i, max);
		
	}
	
	return 0;
}
