#include <iostream>
#include <iomanip>
#include <cmath> // Inclua a biblioteca cmath para a função abs

using namespace std;

int main() {
    int a, b, c;

    cout << "Digite um numero inteiro: ";
    cin >> a;
    cout << "Digite outro numero inteiro: ";
    cin >> b;

    // Soma de a e b em formato hexadecimal
    c = a + b;
    cout << "Soma de a e b em formato hexadecimal: 0x" << hex << c << endl;

    // Produto de a e b em formato octal
    c = a * b;
    cout << "Produto de a e b em formato octal: 0" << oct << c << endl;

    // Módulo da diferença
    c = abs(a - b);
    cout << "Modulo da diferença entre a e b: " << c << endl;

    // Divisão de a por b
    if (b != 0) {
        c = a / b;
        cout << "Quociente de a por b: " << c << endl;
    } else {
        cout << "A divisao por zero nao eh possível." << endl;
    }

    // Verificar se a é divisível de forma exata por b
    if (a % b == 0) {
        cout << "a é divissvel de forma exata por b." << endl;
    } else {
        cout << "a nao eh divisivel de forma exata por b." << endl;
    }

    return 0;
}
