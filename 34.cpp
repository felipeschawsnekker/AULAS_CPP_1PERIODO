
#include <iomanip>
#include <iostream>
using namespace std;

int main (){

double A,B;

cout<<"Numerador"; cin>>A;
cout<<"Denominador"; cin>>B;

cout<<defaultfloat<<setprecision(3);
double result=A/B;

cout<<"O resultado da divisão é: "<<result;

return 0;
}
