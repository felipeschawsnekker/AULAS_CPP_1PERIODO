
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main (){
    
    string num;
    
    cout<<"Digite o número da conta corrente (3 digitos): ";
    getline(cin, num);
   
    
    while(num.empty() || num.length()!=3 || !isdigit(num[0]) || !isdigit(num[1]) || !isdigit(num[2])){
        cout<<"Erro. Tente novamente"<<endl;
        cout<<"O novo valor é: ";
        getline (cin,num);

    }
    
    int num0=num[0]-'0';
    int num1=num[1]-'0';
    int num2=num[2]-'0';
    int inverso = num2*100 + num1*10 + num0;
    int new0= num0*100 + num1*10 + num2;
    

    int soma = new0 +inverso;
    cout <<"O inverso é: "<<setw(3)<<setfill('0')<<inverso<<endl;
    cout<<"A soma do inverso com o numero é: "<<soma<<endl;
    
    int inv0 = soma / 100;
    int inv1 = soma / 10 % 10;
    int inv2 = soma % 10;

    int novasoma = inv0 * 1 + inv1 * 2 + inv2 * 3;
    cout<<"A multplicacao dos inversos pela sua ordem posicial junto de sua soma é: "<<novasoma<<endl;
    
    cout<<"O código verificador é: "<<novasoma%10;

   
    return 0;
}
