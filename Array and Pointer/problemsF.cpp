#include <stdio.h>
#include <string.h>
//#include <ctype.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		char word[100000];
		scanf("%s", word);
		
		int alphabet[26] = {0};
		
		for (int x = 0; x < strlen(word); x++){
			
//			if (isupper(word[x])){
//				
//				tolower(word[x]);
//				
//			}
			
			alphabet[word[x] - 'a'] = 1;
			
		}
		
		int counter = 0;
		
		for (int j = 0; j < 26; j++){
			
			counter += alphabet[j];
			
		}
		
		if (counter % 2 == 0){
			
			printf("Case #%d: Yay\n", i+1);
			
		}
		
		else {
			
			printf("Case #%d: Ewwww\n", i+1);
			
		}
		
	}
	
	return 0;
}
