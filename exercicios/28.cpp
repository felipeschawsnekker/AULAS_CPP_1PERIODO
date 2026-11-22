#include <iostream>

using namespace std;

int main(){
    double valorHora, numAulas, descontoINSS, salarioBruto, salarioLiquido;
    cout<<"Digite o valor da hora-aula: "; cin>>valorHora;
    cout<<"Digite o número de aulas dadas no mês: "; cin>>numAulas;
    cout<<"Digite o percentual de desconto do INSS: "; cin>>descontoINSS;
    
    salarioBruto = valorHora * numAulas;
    salarioLiquido = salarioBruto - (salarioBruto * descontoINSS / 100);
    
    cout<<"O salário líquido do professor é: "<<salarioLiquido<<endl;
    
    return 0;
}
