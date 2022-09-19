#include <stdio.h>
#include <conio.h>


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
    printf("Enter your choice    :    ");
    scanf("%c", &x);
    
    if (x=='1')
    {
        printf("Enter the temp at Celcius   :   ");
        scanf("%f", &c);
        f = ( 32 + ( ( 9 * c ) / 5 ) ) ;
        printf("The temp in Farenhite is : %f\n\n", f);
    }

    if (x=='2')
    {
        printf("Enter the temp at Celcius    :   ");
        scanf("%f", &c);
        k = ( c + 273.15 );
        printf("The temp in Kelvin is : %f\n\n" ,k);
    }

    if (x=='3')
    {
        printf("Enter the temp at Farenhite   :   ");
        scanf("%f", &f);
        c= (  ( 5 * ( f - 32 ) / 9 ) );
        printf("The temp in Celcius is : %f\n\n", c);
    }

    if (x == '4')
    {
        printf("Enter the temp at Farenhite   :   ");
        scanf("%f", &f);
        f = ( (  5  * (f - 32 ) / 9 ) + 273.15 );
        printf("The temp in Kelvin is : %f\n\n", f);
    }

    if (x == '5')
    {
        printf("Enter the temp at Kelvin   :   ");
        scanf("%f", &k);
        c = k - 273.15 ; 
        printf("The temp in Celcius is : %f\n\n" , c);
    }
    
    if (x == '6')
    {
        printf("Enter the temp   :   ");
        scanf("%f" , k );
        f = ( ( 9 * ( k - 273.15 ) / 5 ) + 32 );
        printf("The temp in Farenhite is : %f\n\n" , f );  

    } 
    
    return 0;
}