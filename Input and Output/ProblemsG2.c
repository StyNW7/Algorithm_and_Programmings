#include <stdio.h>

int main()
{
    char kata[150];
    
    scanf("%[^\n]s", kata);
    
    printf("Happy Birthday to %s", kata);
    printf(".\n");
    

    return 0;
}
