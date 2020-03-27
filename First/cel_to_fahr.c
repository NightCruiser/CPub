#include<stdio.h>

int main(int argc, char* argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -50; /* lower temperature limit in table */
    upper = 110; /* upper limit */
    step = 5; /* step size */

    printf("Celsius\tFahrenheit\n");
    celsius = lower;
    while(celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%7.0f\t%10.2f\n", celsius, fahr) ;
        celsius = celsius + step;
        }
}
