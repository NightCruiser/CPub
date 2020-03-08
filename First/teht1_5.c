#include<stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0.0; /* lower temperature limit in table */
    upper = 300; /* uppepr limit */
    step = 20; /* step size */

    fahr = upper;
    while(fahr >= lower) {
        celsius = (5.0/9.0) * (fahr-32.0) ;
        printf("%3.0f\t%6.1f\n", fahr, celsius) ;
        fahr = fahr - step;
        }
}
