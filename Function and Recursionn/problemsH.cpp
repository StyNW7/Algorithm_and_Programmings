#include <stdio.h>
#include <string.h>

void fibonacci(int n, char* a, char* b) {
    char fib[1001];
    
    if (n == 1) {
        printf("%s", b);
    }
    
    if (n == 0) {
        printf("%s", a);
    }

	if (n >= 2) {
		
		for (int i = 2; i <= n; i++) {
	        strcpy(fib, b);
	        strcat(fib, a);
	        printf("%s", fib);
	        strcpy(a, b);
	        strcpy(b, fib);
	    }
		
	}
    
}

int main() {
    
    int test;
    scanf("%d", &test); getchar();

    for (int i = 1; i <= test; i++){
    	
    	int position;
    	char char1[1001], char2[1001];
    	scanf("%d", &position); getchar();
    	scanf("%c", &char1); getchar();
    	scanf("%c", &char2); getchar();
    	
    	
    	printf("Case #%d: ", i);
    	
//    	fibonacci (position, &char1, &char2);

		char fib[1001];
    	
    	if (position == 0) {
	        printf("%s", char2);
	    }
    	
	    else if (position == 1) {
	        printf("%s", char1);
	    }

		else if (position >= 2) {
			
			for (int j = 2; j <= position; j++) {
				strcpy(fib, char2);
		        strcat(fib, char1);
		        strcpy(char1, char2);
		        strcpy(char2, fib);
		    }
			
		}
		
		printf("%s", fib);
    	
    	printf("\n");
    	
	}

    return 0;
}

