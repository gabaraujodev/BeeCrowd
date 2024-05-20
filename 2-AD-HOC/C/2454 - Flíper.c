#include <stdio.h>
#include <stdlib.h>

 
int main() {
    int p1,c1,p2,c2;
    scanf("%i %i",&p1 , &p2);
    if(p1==0&&p2==0)
        printf("C\n");
    if(p1==0&&p2==1)
        printf("C\n");
    if(p1==1&&p2==0)
        printf("B\n");
    if(p1==1&&p2==1)
        printf("A\n");



return 0;
}
