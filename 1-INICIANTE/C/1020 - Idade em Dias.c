#include <stdio.h>
#include <stdlib.h>

 
int main() {
    int qnt,qnt2;
    scanf("%i",&qnt);
    printf("%i ano(s)\n",qnt/365);
    qnt=qnt%365;
    printf("%i mes(es)\n",qnt/30);
    qnt=qnt%30;
    printf("%i dia(s)\n",qnt);

    return 0;
}