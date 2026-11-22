#include <iostream>

using namespace std;

int main(){
    double valor, taxa, tempo, prestacao;
    cout << "Digite o valor da prestação: "; cin >> valor;
    cout << "Digite a taxa de juros (% ao mês): "; cin >> taxa;
    cout << "Digite o tempo de atraso (em meses): "; cin >> tempo;
    
    prestacao = valor + (valor * (taxa / 100) * tempo);
    
    cout << "O valor da prestação em atraso é: " << prestacao << endl;
    
    return 0;
}
