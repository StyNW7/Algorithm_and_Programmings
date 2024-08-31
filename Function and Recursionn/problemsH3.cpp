#include <stdio.h>
#include <string.h>

int main() {
    int test;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++) {
        int position;
        char char1[1001], char2[1001];
        scanf("%d", &position);
        scanf("%s", char1);
        scanf("%s", char2);

        char fib[1001];

        printf("Case #%d: ", i);

        if (position == 0) {
            printf("%s", char1);
        }
		else if (position == 1) {
            printf("%s", char2);
        }
		else if (position >= 2) {
            for (int j = 2; j <= position; j++) {
                strcpy(fib, char2);
                strcat(fib, char1);
                strcpy(char1, char2);
                strcpy(char2, fib);
            }
            printf("%s", fib);
        }

        printf("\n");
        
    }

    return 0;
}

