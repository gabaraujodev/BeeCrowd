#include <iostream>

using namespace std;


int main (){
    double A{0},B{0},C{0};

    cin>>A>>B>>C;
    int auxiliar=0;
    if(B>A){
        auxiliar = A;
        A = B;
        B = auxiliar;
    }
    
    if(C>A){
            auxiliar = A;
            A = C;
            C = auxiliar;
        }

     if(C>B){
            auxiliar = B;
            B = C;
            C = auxiliar;
        }
double soma = (B*B)+(C*C);


if(A>=(B+C)){
    cout<<"NAO FORMA TRIANGULO\n";

}
else if((A*A)==soma)
{
    cout<<"TRIANGULO RETANGULO\n";
}
else if((A*A)>soma )
{
    cout<<"TRIANGULO OBTUSANGULO\n";
}
else if((A*A)<soma )
{
    cout<<"TRIANGULO ACUTANGULO\n";
}
if((A==B) && (A==C)){
    cout<<"TRIANGULO EQUILATERO\n";
    
}


if(((A==B)&&(A!=C)) || ((B==C)&&(B!=A)) || ((A==C)&&(A!=B)) ){
    cout<<"TRIANGULO ISOSCELES\n";

}


return 0;
}

