#include<stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0.0; /* нижняя граница 
               температур в таблице */
    upper = 300; /* верхняя граница */
    step = 20; /* величина шага */
    
    fahr = upper;
    while(fahr >= lower) {
        celsius = (5.0/9.0) * (fahr-32.0) ;
        printf("%3.0f\t%6.1f\n", fahr, celsius) ;
        fahr = fahr - step;
        }
}