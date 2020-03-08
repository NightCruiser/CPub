#include<stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = -50; /* нижняя граница 
               температур в таблице */
    upper = 110; /* верхняя граница */
    step = 5; /* величина шага */
    
    printf("Celsius\tFahrenheit\n");
    celsius = lower;
    while(celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%7.0f\t%10.2f\n", celsius, fahr) ;
        celsius = celsius + step;
        }
}