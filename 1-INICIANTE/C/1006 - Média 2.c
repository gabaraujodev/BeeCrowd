#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
double A;
double B;
double C;
double media;
scanf("%lf",&A);
scanf("%lf",&B);
scanf("%lf",&C);
A=A*2;
B=B*3;
C=C*5;
media= A+B+C;
media/=10;
printf("MEDIA = %.1f\n",media);

    return 0;
}