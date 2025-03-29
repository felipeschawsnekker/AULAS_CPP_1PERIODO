


#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    double salario,quantidade;
    cout<<"Digite o seu salário: "; cin>>salario;
    
    cout<<defaultfloat<<setprecision(0);
    quantidade=salario/1518;
    
    cout<<"Seu salario corresponde a "<<quantidade<<" salarios"<<endl;
    
    cout<<defaultfloat<<setprecision(3);
    quantidade=salario/1518;
    cout<<"Ou na forma decimal, corresponde a: "<<quantidade<<" salarios"<<endl;
    return 0;
}
