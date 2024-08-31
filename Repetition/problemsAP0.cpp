#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int number;
		int k;
		char word[101];
		scanf("%d %d", &number, &k);
		scanf("%s", word);
		
		printf("Case #%d: ", i+1);
		
		for (int j = 0; j < number; j++){
			
			int temp = word[j] + k - 'a';
			
			if (temp > 25){
				temp = temp % 26;
			}
			
			printf("%c", temp + 'a');
						
		}
		
		printf("\n");
		
	}
	
	return 0;
}
