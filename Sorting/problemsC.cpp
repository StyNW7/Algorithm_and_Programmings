#include <stdio.h>
#include <string.h>

int main(){
	
	int size;
	scanf("%d", &size); getchar();
	
	char student[1001][1001];
	for (int i = 0; i < size; i++){
		scanf("%[^\n]", student[i]);
		getchar();
	}
	
	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(student[j], student[j+1]) > 0) {
                char temp[1001];
                strcpy (temp, student[j]);
                strcpy (student[j], student[j+1]);
                strcpy (student[j+1], temp);
            }
        }
    }
	
	for (int i = 0; i < size; i++) {
        printf("%s", student[i]);
		printf("\n");
    }
    
	return 0;
}
