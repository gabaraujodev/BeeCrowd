#include <stdio.h>
#include <stdlib.h>

 
int main() {
    int qnt,qnt2;
    scanf("%i",&qnt);
    qnt2=qnt/60/60;
    printf("%i:%i:%i\n",qnt2,qnt/60%60,qnt%60);
    return 0;
}