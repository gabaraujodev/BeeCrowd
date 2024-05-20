#include <stdio.h>

int main(){

    float vet[5] ;
    int a,b;
    vet[0]=4.00;
    vet[1]=4.50;
    vet[2]=5.00;
    vet[3]=2.00;
    vet[4]=1.50;

    scanf("%i %i",&a,&b);
    a=a-1;
    vet[a]=vet[a]*b;
    printf("Total: R$ %.2f\n",vet[a]);





}