#include <stdio.h>
#include <string.h>

int main(){
	
	int test;
	scanf("%d", &test);
	getchar();
	
	for (int i = 1; i <= test; i++){
		
		char word[1001];
		scanf("%s", word);
		getchar();
		
		int change;
		scanf("%d", &change);
		getchar();
		
		char before[change];
		char after[change];
		
		for (int a = 0; a < change; a++){
			
			scanf("%c", &before[a]);
			getchar();
			scanf("%c", &after[a]);
			getchar();
			
		}
		
		for (int x = 0; x < strlen(word); x++){
			
			for (int z = 0; z < change; z++){
				if (word[x] == before[z]){
					word[x] = after[z];
				}
			}
				
		}
		
		printf("Case #%d: %s\n", i, word);
		
	}
	
	return 0;
}
