
#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    
/*
Salário	Percentual de Reajuste
0 - 400.00   15%
400.01 - 800.00 12%
800.01 - 1200.00    10%
1200.01 - 2000.00   7%
Acima de 2000.00    4%
*/
int A,B,C,D,E;
A=15;
B=12;
C=10;
D=7;
E=4;
double salario;
cin>> salario;
cout << fixed << setprecision(2);
if (salario <=400.00)
{
    cout << "Novo salario: "<<salario+(0.15*salario)<<"\n";
    cout << "Reajuste ganho: "<<(0.15*salario)<<"\n";
    cout << "Em percentual: "<<A<<" %\n";
}else if (salario >400.00 && salario <=800.00)
{  cout << "Novo salario: "<<salario+(0.12*salario)<<"\n";
    cout << "Reajuste ganho: "<<(0.12*salario)<<"\n";
    cout << "Em percentual: "<<B<<" %\n";
}else if (salario >800.00 && salario <=1200.00)
{
      cout << "Novo salario: "<<salario+(0.10*salario)<<"\n";
    cout << "Reajuste ganho: "<<(0.10*salario)<<"\n";
    cout << "Em percentual: "<<C<<" %\n";
}else if (salario >1200.00 && salario <=2000.00)
{
      cout << "Novo salario: "<<salario+(0.07*salario)<<"\n";
    cout << "Reajuste ganho: "<<(0.07*salario)<<"\n";
    cout << "Em percentual: "<<D<<" %\n";
}else if (salario >2000.00)
{
      cout << "Novo salario: "<<salario+(0.04*salario)<<"\n";
    cout << "Reajuste ganho: "<<(0.04*salario)<<"\n";
    cout << "Em percentual: "<<E<<" %\n";
}






}
