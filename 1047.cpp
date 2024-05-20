#include <iostream>

using namespace std;


int main(){

int A,B,C,D;

cin >> A >> C >> B >>D ;
int contador = 0;


for (int i = 0; i <= 23; i++)
{
    contador++;
    A++;
    if(A==24){
        A=0;
    }
    if(A==B){

        break;      

    }
}
int contador2 = 0;
for (int j = 0; j <= 70; j++)
{
    contador2++;
    C++;
    if(C==60){
        C=0;
        
    }
    if(C==D){
        
        break;   

    }
}
if (contador2==60)
{
    contador2 =0;
}



cout <<"O JOGO DUROU " << contador <<" HORA(S)"<<" E "<<contador2<<"MINUTOS\n";

return 0 ;

}