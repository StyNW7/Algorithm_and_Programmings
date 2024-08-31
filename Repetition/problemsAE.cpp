#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int r, tinggi;
		scanf("%d %d", &r, &tinggi);
		double luas;
		
		luas = (2 * 3.14 * r * r) + (2 * 3.14 * r * tinggi);
		
		printf("Case #%d: %.2lf\n", i+1, luas);
		
	}
	
	return 0;
}
