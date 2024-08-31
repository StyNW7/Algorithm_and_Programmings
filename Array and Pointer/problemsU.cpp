#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		int match;
		scanf("%d", &match);
		
		int history[match];
		
		for (int j = 0; j < match; j++){
			scanf("%d", &history[j]);
		}
		
		int bibi, lili;
		scanf("%d %d", &bibi, &lili);
		
		int totalBibi = history[bibi-1];
		int totalLili = history[lili-1];
		
		if (totalBibi > totalLili){
			printf("Case #%d : Bibi\n", i);
		}
		
		else if (totalBibi < totalLili){
			printf("Case #%d : Lili\n", i);
		}
		
		else {
			printf("Case #%d : Draw\n", i);
		}
		
	}
	
	return 0;
}
