#include <stdio.h>

int main()
{
    int t;
    double a1, b1, a2, b2, a3, b3;
    double hasil1, hasil2, hasil3;
    
    scanf("%d", &t);
    scanf("%lf %lf", &a1, &b1);
    scanf("%lf %lf", &a2, &b2);
    scanf("%lf %lf", &a3, &b3);
    
    printf("%.2lf\n", a1*b1/360);
    printf("%.2lf\n", a2*b2/360);
    printf("%.2lf\n", a3*b3/360);

    return 0;
}

