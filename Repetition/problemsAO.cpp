#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int len;
		scanf("%d", &len);
		getchar();
		
		char word[101];
		scanf("%[^\n]", word);
		getchar();
		
		printf("Case #%d: ", i+1);
		
		for (int j = 0; j < len; j++){
			if (isalpha(word[j])){ //(word [j] >= 'A' && word [j] <= 'Z') || (word [j] >= 'a' && word [j] <= 'z')
				putchar(word[j]);
			}
		}
		
		printf("\n");
		
	}
	
	return 0;
}
