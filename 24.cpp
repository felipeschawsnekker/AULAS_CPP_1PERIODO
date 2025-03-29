#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double nota1,nota2,media;

    cin>>nota1>>nota2;

    media=(nota1+nota2)/2;

    cout<<"media truncada "<<int(media)<<endl;
    cout<<"media arredondada "<<round(media)<<endl;

    return 0;
}

