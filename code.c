#include <stdio.h>

int main()
{
    float c, f, k;
    char x;
    printf("1. Celcius to Farenhite.\n");
    printf("2. Celcius to Kelvin. \n");
    printf("3. Farenhite to Celcius.\n");
    printf("4. Farenhite to Kelvin. \n");
    printf("5. Kelvin to Celcius, \n");
    printf("6. Kelvin to Farenhite. \n");
    printf("Enter your choice    :    ""\n");
    scanf("%c", &x);
    
    if (x=='1')
    {
        printf("Enter the temp   :   ");
        scanf("%f", &c);
        f=(32+((9*c)/5));
        printf("%f\n", f);
    }

    if (x=='2')
    {
        printf("Enter the temp    :   ");
    }
    

    if (x=='3')
    {
        printf("Enter the temp   :   ");
        scanf("%f", &f);
        c=((5*(f-32)/9));
        printf("%f\n", c);
    }
     
    return 0;
}