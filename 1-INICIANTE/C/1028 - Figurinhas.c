#include <stdio.h>
int main(int args, char*  arg[])
{
    int A,a,B,b,r,T,ncasos;
      scanf("%i",&ncasos);
      for(int i=0;i<ncasos;i++){
        
        
        scanf("%d %d", &A, &B);
        if((A!=0) && (B!=0))
        {
            if(A<B)
            { 
            T=A;
            A=B;
            B=T;}
            a=A; 
            b=B; 
            r=B; //se iguais, B será o MDC
            while(A%B!=0)
            {r = A % B; A = B; B = r;}
            printf("%d\n",r);
            }
            } }
            