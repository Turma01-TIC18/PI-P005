#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int a,b,c;

    cout << "Digite o primeiro número inteiro: ";
    cin >> a;
    cout << "Digite o segundo número inteiro: ";
    cin >> b;

    /*c = a + b;

    cout << "A soma da variável a e b em hexadeximal é: " << hex << c << endl;

    c = a * b;

    cout << "A produto da variável a e b é: " << oct << c << endl;*/

    
    /*a >= b ? c = a -b : c = b - a ;

    cout << "O módulo absoluto entre a diferença de a e b é: " << c << endl;*/

    c = abs(a-b);

    cout << "O módulo absoluto entre a diferença de a e b é: " << c  << endl;
    

    

    return 0;
}