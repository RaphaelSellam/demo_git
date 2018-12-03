#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

int main()
{   double x, xr, cosx, sinx, cosxr, sinxr;
    printf("Cosinus de pi/2 = %lf\n", cos(pi/2));
    printf("Cosinus de pi = %lf\n", cos(pi));
    printf("Sinus de pi/2 = %lf\n", sin(pi/2));
    printf("Quel votre angle en degre ?\n");
    scanf("%lf", &x);
    xr = (pi*x)/180;
    printf("%lf degre = %lf radians\n",x,xr);
    cosx = cos(xr);
    sinx = sin(xr);
    printf("Cosinus de %lf = %lf\n", x, cosx);
    printf("Sinus de %lf = %lf\n", x, sinx);
    printf("tangente de %lf = %lf\n", x, sinx/cosx);
    return 0;
}
