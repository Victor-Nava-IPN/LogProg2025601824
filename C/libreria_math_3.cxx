#include <stdio.h>
#include <math.h>

int main()
{
    float a=7,area,peri;

    area=(a*a/2.0)+(a*a)*4;
    peri=(sqrt(pow(a,2)*2))*3+a*8;

    printf("Area es igual a %.2f \n", area); 
    printf("Perimetro es igual a %.4f \n", peri); 
    
    return 0;
}