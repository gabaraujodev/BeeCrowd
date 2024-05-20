#include <stdlib.h>
#include <stdio.h>

int main(){
    int Z,H,L,maior,meio,menor,cont=0;
    scanf("%i",&H );
    scanf("%i",&Z);
    scanf("%i",&L);
    if(H>Z && H<L || H<Z && H>L )
        printf("huguinho\n");
    if(L>Z && L<H || L>H && L<Z)
        printf("luisinho\n");
    if(Z>H && Z<L || Z>L && Z<H)
        printf("zezinho\n");

}