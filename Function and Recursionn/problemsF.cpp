#include <stdio.h>
#include <string.h>

int main(){
	
	int test;
	scanf("%d", &test); getchar();
	
	for (int i = 1; i <= test; i++){
		
		char word[1001];
		scanf("%[^\n]", word);
		getchar();
		
		printf("Case #%d: ", i);
		
		for (int x = strlen(word)-1; x >= 0; x--){
			printf("%c", word[x]);
		}
		
		printf("\n");
		
	}
	
	return 0;
}
