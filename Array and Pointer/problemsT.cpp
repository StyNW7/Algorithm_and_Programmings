#include <stdio.h>
#include <string.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		char wordBefore[10001];
		
		scanf("%s", wordBefore);
		
		char wordAfter [10001];
		
		strcpy (wordAfter, wordBefore);
		
		char change[5] = {'A', 'E', 'I', 'O', 'U'};
		
		char key[5][6] = {
		
			{'A', 'B', 'C', 'D'},
			{'E', 'F', 'G', 'H'},
			{'I', 'J', 'K', 'L', 'M', 'N'},
			{'O', 'P', 'Q', 'R', 'S', 'T'},
			{'U', 'V', 'W', 'X', 'Y', 'Z'},
		
		};
		
		char index[strlen(wordBefore)] = {0};
		
		for (int i = 0; i < strlen(wordBefore); i++){
			
			for (int j = 0; j < 5; j++){
				
				for (int a = 0; a < 6; a++){
					
					if (wordAfter[i] == key[j][a]){
						wordAfter[i] = change[j];
						index[i] = a;
					}
					
				}
				
			}
			
		}
		
		printf("Case #%d:\n%s\n", i, wordAfter);
		
		for (int i = 0; i < strlen(wordBefore); i++){
			printf("%d", index[i]);
		}
		
		printf("\n");
		
	}
	
	return 0;
}
