#include <stdio.h>

int main()
{
    int t;
    double celcius1, celcius2, celcius3;
    double hasil1, hasil2, hasil3;
    
    scanf("%d", &t);
    scanf("%lf", &celcius1);
    scanf("%lf", &celcius2);
    scanf("%lf", &celcius3);
    
    printf("%.2lf %.2lf %.2lf\n", celcius1*4/5, celcius1*9/5+32, celcius1+273);
    printf("%.2lf %.2lf %.2lf\n", celcius2*4/5, celcius2*9/5+32, celcius2+273);
    printf("%.2lf %.2lf %.2lf\n", celcius3*4/5, celcius3*9/5+32, celcius3+273);

    return 0;
}

