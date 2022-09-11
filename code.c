#include <stdio.h>
#include <conio.h>

int main()
{
    float c, f;
    char x;
    printf("1. Celcius to Farenhite.\n");
    printf("2. Farenhite to Celcius.\n");
    printf("Enter your choice    :    ");
    scanf("%c", &x);
    
    if (x=='1')
    {
        printf("Enter the temp   :");
        scanf("%f", &c);
        f=(32+((9*c)/5));
        printf("%f\n", f);
    }

    if (x=='2')
    {
        printf("Enter the temp   :");
        scanf("%f", &f);
        c=((5*(f-32)/9));
        printf("%f\n", c);
    }
     
    return 0;
}