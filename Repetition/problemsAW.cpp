#include <stdio.h>
#include <string.h>

int main() {
    
    int test;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++) {
    	
    	int num;
    	scanf("%d", &num);
    	int count = 0;
    	int score[num];
    	int max = 0;
    	
    	for (int j = 0; j < num; j++){
    		scanf("%d", &score[j]);
		}
		
		for (int a = 0; a < num; a++){
			if (max < score[a]){
				max = score[a];
			}
		}
		
		for (int x = 0; x < num; x++){
			if (max == score[x]){
				count += 1;
			}
		}
		
		printf("Case #%d: %d\n", i, count);
        
    }

    return 0;
}
