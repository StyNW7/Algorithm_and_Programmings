#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++) {
        char word[100001];
        scanf("%s", word);

        int alphabet[26] = {0};

        for (int x = 0; word[x]; x++) {
            char c = tolower(word[x]);
            if (c >= 'a' && c <= 'z') {
                alphabet[c - 'a'] = 1;
            }
        }

        int counter = 0;

        for (int j = 0; j < 26; j++) {
            counter += alphabet[j];
        }

        printf("Case #%d: %s\n", i + 1, (counter % 2 == 0) ? "Yay" : "Ewwww");
    }

    return 0;
}

