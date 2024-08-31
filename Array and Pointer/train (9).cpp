#include <stdio.h>
#include <string.h>

int main(){
	
	char word[101];
	scanf("%s", word);
	int shift;
	scanf("%d", &shift);
	
	for (int i = 0; i < strlen(word); i++){
		printf("%c", (word[i] - 'a' + shift) % 26 + 'a');
	}
	
	return 0;
}
