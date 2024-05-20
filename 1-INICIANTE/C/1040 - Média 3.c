#include <stdio.h>
#include <stdlib.h>

 
int main() {
    float p1,p2,p3,p4,p5,ex,mf;
    scanf("%f",&p1 );
    scanf("%f",&p2 );
    scanf("%f",&p3 );
    scanf("%f",&p4 );
    p1=p1*2;
    p2=p2*3;
    p3=p3*4;
    p5= p1+p2+p3+p4;
    p5= p5/10;

    if(p5>=7.0){
        printf("Media: %.1f\n",p5);
        printf("Aluno aprovado.\n");
    }
    if(p5<5.0){
        printf("Media: %.1f\n",p5);
        printf("Aluno reprovado.\n");
    }
    if(p5>=5.0 &&p5<=6.9){
        printf("Media: %.1f\n",p5);
        printf("Aluno em exame.\n");
        scanf("%f",&ex);
        if(ex>=6.0)
            mf=p5+ex;
        mf= mf/2;
        printf("Nota do exame: %.1f\n",ex);
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n",mf);

}




return 0;
}
