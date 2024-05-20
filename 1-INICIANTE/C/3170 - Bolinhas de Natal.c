#include <stdio.h>
#include <stdlib.h>

 
int main() {
    int p1,c1,p2,c2;
    scanf("%i %i",&p1 , &p2);
    if(p2%2!=0)
        p2= p2-1;
        p2=p2/2;
        c1= p2-p1;
    if(c1==0||c1<0)
        printf("Amelia tem todas bolinhas!\n");
    else
        printf("Faltam %i bolinha(s)\n",c1);



return 0;
}
