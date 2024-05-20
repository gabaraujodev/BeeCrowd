#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,tmp,maior,menor,meio;
    scanf("%i %i %i",&a, &b, &c);
    if (a>b){
        tmp=a;}
    else{
        tmp=b;}
    if(tmp>c){
        maior=tmp;}
    else{
        maior=c; 
    }
    
    if (a<b){
        tmp=a;}
    else{
        tmp=b;}
    if(tmp<c){
        menor=tmp;}
    else{
        menor=c; 
    }
    if(a==maior&&b==menor)
        meio=c;
    if(a==menor&&b==maior)
        meio=c;

    if(b==menor&&c==maior)
        meio=a;
    if(c==menor&&b==maior)
        meio=a;

    if(a==menor&&c==maior)
        meio=b;
    if(c==menor&&a==maior)
        meio=b;
    printf("%i\n",menor);
    printf("%i\n",meio);
    printf("%i\n",maior);
    printf("\n");
    printf("%i\n",a);
    printf("%i\n",b);
    printf("%i\n",c);
}


