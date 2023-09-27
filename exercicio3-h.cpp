#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int a,b,c;
    string resposta;

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

    /*c = abs(a-b);

    cout << "O módulo absoluto entre a diferença de a e b é: " << c  << endl;*/


    /*resposta =
    b == 0 ? "A divisão por zero não é possível..." : "O quociente de a por b é: ";
    cout << resposta << endl;
    
    
    c = (b == 0)? 0 : (a / b);

    cout << "==> " << c << endl;*/

    cout << "----------------------------------" << endl;
    (a % b == 0) ? (cout << "a é divisível de forma exata por b\n" ): (cout << "a não é divisível de forma exata por b\n");
    
    
    

    return 0;
}