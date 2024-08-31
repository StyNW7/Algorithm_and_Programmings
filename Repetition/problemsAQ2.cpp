#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		char word[1001];
		scanf("%s", word);
		
		bool flag = true;
		int dotCounter = 0;
		
		for (int x = 0; x < strlen(word); x++){
//			if (!isdigit(word[x]) && word[x] != '.'){
//				flag = false;
//				break;
//			}
//			if (!isdigit(word[0])){
//				flag = false;
//				break;
//			}
//			if (isdigit(word[x])){
//				int temp = 0;
//				for (int a = x; a < strlen(word); a++){
//					if (isdigit(word[a])){
//						temp++;
//					}
//					else if (!isdigit(word[x]) && word[x] != '.') {
//						flag = false;
//						break;
//					}
//					if (word[a] == '.'){
//						dotCounter++;
//						break;
//					}
//				}
//				x += temp;
//				if (!flag) break;
//			}
			if (!isdigit(word[0])) break;
			else if (word[x] == '.' && word[x+1] == '.') break;
			else if (isdigit (word[x]) && word[x+1] == '.') dotCounter++;
		}
		
		if (flag && dotCounter == 5) printf("Case #%d: YES\n", i);
		else printf("Case #%d: NO\n", i);
		
	}
	
	return 0;
}
