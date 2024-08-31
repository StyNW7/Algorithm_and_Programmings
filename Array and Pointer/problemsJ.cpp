#include <stdio.h>
#include <string.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		char word[1001];
		
		scanf("%s", word);
		
		printf("Case %d: ", i+1);
		
		for (int x = 0; x < strlen(word); x++){
			
			if (x == strlen(word) -1 ){
				printf("%d\n", word[x]);
			}
			else {
				printf("%d-", word[x]);
			}

		}
		
	}
	
	return 0;
}
