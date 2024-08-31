#include <stdio.h>
#include <string.h>

int main() {
    
    int test;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++) {
    	
    	char word[101];
    	scanf("%s", word);
    	bool valid = false;
    	
    	int num;
	    char dot;
	
	    if (sscanf(word, "%d.%d.%d.%d.%d.%d", &num, &num, &num, &num, &num, &num) == 6) {
	        if (sscanf(word, "%*d.%*d.%*d.%*d.%*d.%*d%c", &dot) == 0) {
	            valid = true;
	        }
	    }
	    
	    if (valid == true){
	    	printf("Case #%d: YES\n", i);
		}
		
		else {
			printf("Case #%d: NO\n", i);
		}
        
    }

    return 0;
}
