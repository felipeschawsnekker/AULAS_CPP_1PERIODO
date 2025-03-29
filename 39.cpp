
using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>
int main () {
    double a,b;
    
    cout<<"Primeiro valor: "; cin>>a;
    cout<<"Segundo valor: "; cin>>b;
    
    cout<<defaultfloat<<setprecision(3);
    double x= pow((a-b),2);
    cout<<"O valor do quadrado da diferença é: "<<x<<endl;
    
    double y= pow(a,2) - pow(b,2);
    cout<<"O valor da diferença de quadrados é: "<<y<<endl;
    return 0;
}
