
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main () {
    
    double aplicacao,taxa,meses;
    
    cout<<"Valor da aplicação: "; cin>>aplicacao;
    cout<<"Valor da taxa (em %): "; cin>>taxa;
    cout<<"Quantidade de meses: "; cin>>meses;
    
    taxa=taxa/100;
    
    double rendimento = aplicacao * (pow((1+taxa),meses)-1)/taxa;
    
    cout<<fixed<<setprecision(2);
    cout<<"O valor do rendimento é R$"<<rendimento<<endl;
    return 0;
    
    
    
} 
