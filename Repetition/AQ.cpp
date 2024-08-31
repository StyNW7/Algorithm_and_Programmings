#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int test;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++) {
        char word[1001];
        scanf("%s", word);

        bool flag = true;
        int dotCounter = 0;

        for (int x = 0; x < strlen(word); x += 2) {
            if (!isdigit(word[x]) || (x + 1 < strlen(word) && word[x + 1] != '.')) {
                flag = false;
                break;
            }
        }

        if (flag) {
            printf("Case #%d: YES\n", i);
        } else {
            printf("Case #%d: NO\n", i);
        }
    }

    return 0;
}

