#include <iomanip>
#include <iostream>
using namespace std;
int main(){
    int quantidadefitas;
    double valoraluguel;
    cout<<"Digite a quantidade de fitas: ";cin>>quantidadefitas;
    cout<<"Digite o valor do aluguel da fita: ";cin>>valoraluguel;
    double faturamento=valoraluguel*quantidadefitas/3.0*12;
    cout<<fixed<<setprecision(2);
    cout<<"O faturamento anual é de R$"<<faturamento<<endl;
    double multa=quantidadefitas*valoraluguel*0.10/10;
    cout<<"O valor ganho com multas é de R$"<<multa<<endl;
    cout<<fixed<<setprecision(0);
    double estragam=quantidadefitas*0.02;
    double novas=quantidadefitas*0.10;
    double totaldefitas=novas-estragam+quantidadefitas;
    cout<<"A locadora terá "<<totaldefitas<<" fitas no final do ano"<<endl;
    return 0;
}
