#include <iostream>

using namespace std;


int main(){

int A,B;

cin >> A >> B;
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



cout <<"O JOGO DUROU " << contador <<" HORA(S)\n";

return 0 ;

}