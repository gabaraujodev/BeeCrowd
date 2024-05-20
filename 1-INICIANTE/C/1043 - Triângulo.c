#include <stdio.h>



int main(){
float A,B,C, meio, menor, maior, soma=0;
scanf("%f %f %f",&A,&B,&C); 

if(A>=C && A<=B || A<=C && A>=B ){
meio = A;
}
if(B>=C && B<=A || B>=A && B<=C){
meio = B;
}
if(C>=A && C<=B || C>=B && C<=A){
meio = C;
}

if(A<=B && A<=C)
menor=A;
if(B<=A && B<=C)
menor=B;
if(C<=A && C<=B)
menor=C;

if(A>=B && A>=C)
maior=A;
if(B>=A && B>=C)
maior=B;
if(C>=A && C>=B)
maior=C;



soma = meio+menor;


if(soma>maior){
    printf("Perimetro = %.1f\n",A+B+C);
}
else{
    printf("Area = %.1f\n",((A+B)/2.0)*C);
}



}