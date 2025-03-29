#include <iostream>
using namespace std;
int main (){
    double litro,tempo,velocidademedia,distancia,km;
    
    km=1;
    
    
    cout<<"Tempo (em Horas): ";
    cin>>tempo;
    cout<<"Velocidade Média (em Km/h): ";
    cin>>velocidademedia;
    
    distancia=velocidademedia * tempo;
    
    litro=distancia/12.0;
    
    cout<<"Velocidade media: "<<velocidademedia<<"Km/h"<<endl;
    cout<<"Tempo gasto em viagem: "<<tempo<<"h"<<endl;
    cout<<"Distancia percorrida: "<<distancia<<"Km"<<endl;
    cout<<"Consumo em litros: "<<litro<<"L"<<endl;
    
    return 0;
    
}
