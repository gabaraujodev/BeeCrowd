#include <stdio.h>

int main () {
    int n;
    scanf("%i",&n);
    n=n*n;
    if(n%2==0)
        printf("%i casas brancas e %i casas pretas\n",n/2 , n/2);

    else
        printf("%i casas brancas e %i casas pretas\n",n/2+1 , n/2);

    return 0;
}