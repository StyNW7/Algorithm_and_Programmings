#include <stdio.h>
#include <string.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		int times;
		scanf("%d", &times);
		char word[1001];
		scanf("%s", word);
		
		for (int a = 0; a < times; a++){
			
			int index1, index2;
			scanf("%d %d", &index1, &index2);
			
			int temp = index1-1;
			
			char temp2;
			
			for (int x = index2-1; x > index1-1; x--){
				
				temp2 = word[x];
				word[x] = word[temp];
				word[temp] = temp2;
				temp++;
				
				if (x == temp || temp > x){
					break;
				}
				
			}
			
		}
		
		printf("Case #%d: %s\n", i, word);
		
	}
	
	return 0;
}
