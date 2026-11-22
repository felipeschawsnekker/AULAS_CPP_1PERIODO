#include <iostream>

using namespace std;

int main(){
    double raio, altura, volume;
    cout<<"Digite o raio da lata (em cm): "; cin>>raio;
    cout<<"Digite a altura da lata (em cm): "; cin>>altura;
    
    volume = 3.14159 * raio * raio * altura;
    
    cout<<"O volume da lata de óleo é: "<<volume<<" mililitros"<<endl;
    
    return 0;
}
