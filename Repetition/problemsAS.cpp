#include <stdio.h>
#include <math.h>

int main(){
	
	int test;
	int soal;
	int sum = 0;
	char lili[101];
	char bibi[101];
	int correct;
	
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){

		scanf("%d", &soal);
		scanf("%s", lili);
		scanf("%s", bibi);
		for (int j = 0; j < soal; j++){
			if (lili[j] == bibi[j]){
				correct += 1;
			}
		}
		
		printf("Case #%d: %d\n", i+1, correct*100/soal);
		correct = 0;
	}
	
	return 0;
}
