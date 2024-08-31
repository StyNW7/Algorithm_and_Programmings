#include <stdio.h>

int main()
{
    char name[150];
    char id[100];
    char kelas;
    int num;
    
    scanf("%s", id);
    scanf(" %[^\n]s", name);
    getchar();
    scanf(" %c %d", &kelas, &num);
    getchar();
    
    printf("Id    : %s\n", id);
    printf("Name  : %s\n", name);
    printf("Class : %c\n", kelas);
    printf("Num   : %d\n", num);

    return 0;
}
