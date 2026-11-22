

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){
    
    double deposito,juros,rendimento,valortotal;
    
    cout<<"Digite o valor do depósito: "; cin>>deposito;
    cout<<"Digite a taxa de juros (em %)";cin>>juros;
    
    cout<<defaultfloat<<setprecision(3);
    rendimento = deposito * juros/100;
    valortotal= rendimento + deposito;
    
    cout<<"O valor do seu rendimento é: "<<rendimento<<endl;
    cout<<"O valor total é: "<<valortotal<<endl;
    
    return 0;
    
}
