#include <stdio.h>

int main()
{
    char word[150];
    
    int nis;
    int age;
    
    scanf("%[^\n]s", word);
    scanf("%d %d", &nis, &age);
    
    printf("Name: %s\n", word);
    printf("NIS: %d\n", nis);
    printf("Age: %d\n", age);

    return 0;
}
