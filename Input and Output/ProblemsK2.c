#include <stdio.h>

int main()
{
    char word[150];
    
    char nis[100];
    int age;
    
    scanf("%[^\n]s", word);
    scanf("%s %d", nis, &age);
    
    printf("Name: %s\n", word);
    printf("NIS: %s\n", nis);
    printf("Age: %d\n", age);

    return 0;
}
