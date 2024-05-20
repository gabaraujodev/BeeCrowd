#include <stdio.h>
#include <stdlib.h>

 
int main() {

    double a=0,b=0,d=100;

    scanf("%lf",&a);
    scanf("%lf",&b);
    a= a/100;
    b= b/100;
    d+= a*d;
    d+= b*d;
    d= d-100;
    printf("%.6f\n",d);

}