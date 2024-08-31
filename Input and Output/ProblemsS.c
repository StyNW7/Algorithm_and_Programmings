#include <stdio.h>

int main()
{
    char kata[150];
    char special = '%';
    
    scanf("%[^\n]s", kata);
    
    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%cs\\n\",\"%s\");\n", special, kata);
    printf("    return 0;\n");
    printf("}\n");
    

    return 0;
}