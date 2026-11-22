#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double base, altura,perimetro,area,diagonal;
    cout<<"Base: ";
    cin>>base;
    cout<<"Altura: ";  
    cin>>altura;

  perimetro = 2 * (base + altura);
  area = base * altura;
  diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area " << area << endl;
    cout << "Diagonal " << diagonal << endl;

    return 0;
}
