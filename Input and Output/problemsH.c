#include <stdio.h>

int main()
{
    char kata[150];
    
    scanf("%[^\n]s", kata);
    
    printf("Congrats \"%s", kata);
    printf("\" for joining the CS department at BINUS.\n");
    

    return 0;
}
