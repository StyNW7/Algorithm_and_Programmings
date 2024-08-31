#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int a = 1; a <= test; a++){
		
		int size, kapasitas, awal;
		scanf("%d %d %d", &size, &kapasitas, &awal);
		
		int num[size];
		int max = awal;
		
		for (int i = 0; i < size; i++){
			scanf("%d", &num[i]);
			if ((0 <= kapasitas-num[i]) && max < num[i]){
				max = num[i];
			}
		}
		
		printf("Case #%d: %d\n", a, max);
		
	}
	
	return 0;
}
