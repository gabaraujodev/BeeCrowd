#include <stdio.h>

int main () {
    char n;
    char teste[20];
    int cont=0;

    for(int i=0;i<20;i++)
        teste[i]='3';
    
    scanf("%s",teste);
    for(int j=0;j<20;j++){
        if(teste[j]!='3')
        cont++;
    }
    if (cont>=10)
        printf("palavrao\n");

    else
        printf("palavrinha\n");




}