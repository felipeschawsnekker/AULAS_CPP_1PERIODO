
#include <iostream>
#include <string>
using namespace std;
int main (){
    
    string A,B,X;
    
    cout<<"Variavel A: "; cin>>A;
    cout<<"Variavel B: "; cin>>B;
    
    X=A;
    A=B;
    B=X;
    cout<<"O novo valor de A é: "<<A<<endl;
    cout<<"O novo valor de B é: "<<B<<endl;
return 0;
}

