#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x1,x2,x3;
    cout<<"Digite o valor de x1: ";cin>>x1;
    cout<<"Digite o valor de x2: ";cin>>x2;
    cout<<"Digite o valor de x3: ";cin>>x3;
    double X=x1+2*(x1-x2)+x2/(x1+x3)+6;
    cout<<"O valor de X é: "<<X<<endl;
    return 0;
}
