#include<stdio.h>
#include<string.h>

int main(){
	
	int tc;
	scanf("%d", &tc); getchar();
	
	for(int t = 0; t < tc; t++){
		char str[1000];
		scanf("%[^\n]", str); getchar();
		
		int alphabet[26] = {0};
	
		int len = strlen(str);
		
		for(int i = 0; i < len; i++){
			
			if(str[i] >= 'A' && str[i] <= 'Z'){
				str[i] += 32;
			}
			
			alphabet[str[i] - 'a'] = 1;
			
		}
		
		int isPangram = 1;
		
		int isMissing = 0;
		
		for(int i = 0; i < 26; i++){
			if(alphabet[i] == 0){
				if(isMissing == 0){
					
					printf("Missing: ");
	
					isMissing = 1;
					
					isPangram = 0;
					
				}
					
				printf("%c", i + 'a');
					
			}
		}
		
		if(isPangram == 1){
			printf("Pangram\n");
		}
		
		else{
			printf("\n");
		}
	}

	return 0;

}
