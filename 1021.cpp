#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int nota_100{0},nota_50{0},nota_20{0},nota_10{0},nota_5{0},nota_2{0};
    int moeda_1{0},moeda_50{0},moeda_25{0},moeda_10{0},moeda_5{0};
    double valor;

    cin >> valor;
    double auxiliar;

    nota_100 = valor/100.0;
    auxiliar = fmod(valor,100.0);

    nota_50 = auxiliar/50.0;
    auxiliar = fmod(auxiliar,50.0);

    nota_20 = auxiliar/20.0;
    auxiliar = fmod(auxiliar,20.0);

    nota_10 = auxiliar/10.0;
    auxiliar = fmod(auxiliar,10.0);

    nota_5 = auxiliar/5.0;
    auxiliar = fmod(auxiliar,5.0);

    nota_2 = auxiliar/2.0;
    auxiliar = fmod(auxiliar,2.0);

    moeda_1 = auxiliar/1.0;
    auxiliar = fmod(auxiliar,1.0);


    moeda_50 = auxiliar/0.5;
    auxiliar = fmod(auxiliar,0.5);


    moeda_25 = auxiliar/0.25;
    auxiliar = fmod(auxiliar,0.25);


    moeda_10 = auxiliar/0.10;
    auxiliar = fmod(auxiliar,0.10);


    moeda_5 = auxiliar/0.05;
    auxiliar = fmod(auxiliar,0.05);


    cout<< "NOTAS:\n";
    cout<< nota_100 <<" nota(s) de R$ 100.00\n";
    cout<< nota_50 <<" nota(s) de R$ 50.00\n";
    cout<< nota_20 <<" nota(s) de R$ 20.00\n";
    cout<< nota_10 <<" nota(s) de R$ 10.00\n";
    cout<< nota_5 <<" nota(s) de R$ 5.00\n";
    cout<< nota_2 <<" nota(s) de R$ 2.00\n";
    cout<< "MOEDAS:\n";
    cout<< moeda_1 <<" moeda(s) de R$ 1.00\n";
    cout<< moeda_50 <<" moeda(s) de R$ 0.50\n";
    cout<< moeda_25 <<" moeda(s) de R$ 0.25\n";
    cout<< moeda_10 <<" moeda(s) de R$ 0.10\n";
    cout<< moeda_5 <<" moeda(s) de R$ 0.05\n";
    if(auxiliar>=0.001){
        cout<< auxiliar/0.01 <<" moeda(s) de R$ 0.01\n";
    }else
        cout <<"0 moeda(s) de R$ 0.01\n";





return 0;


}