#include <iostream>

using namespace std;

int main(){
    double valorProduto, desconto, valorFinal;
    cout<<"Digite o valor do produto: ";cin>>valorProduto;
    cout<<"Digite o valor do desconto (em porcentagem): ";cin>>desconto;
    valorFinal = valorProduto - (valorProduto * desconto / 100);
    cout<<"O valor com desconto é: "<<valorFinal<<endl;
    return 0;
}
