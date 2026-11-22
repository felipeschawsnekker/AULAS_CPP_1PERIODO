

#include <iostream>
using namespace std;

int main (){
    
    double valor, gorjeta, porcentagem,despesas;
    
  
    
    cout<<"Valor gasto: "; cin>>valor;
    
    gorjeta = valor * 0.10;
    despesas=valor+gorjeta;
    
    cout<<"O valor da gorjeta é: "<<gorjeta<<endl;
    cout<<"O valor total da despesa é: "<<despesas<<endl;
    
    return 0;
}
