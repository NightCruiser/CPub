#include<stdio.h>

int main()
{
    int fahr;
    for(fahr = 300; fahr >= 0;fahr--){
        printf("%3d\t%6.2f\n", fahr, (5.0/9.0) * (fahr-32));
    }
}