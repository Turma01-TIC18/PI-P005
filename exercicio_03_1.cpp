#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    
   
    cout << "Digite o primeiro número inteiro (a): ";
    cin >> a;
    
    cout << "Digite o segundo número inteiro (b): ";
    cin >> b;
    
    c = a + b;
    cout << "Soma de a e b em formato hexadecimal: 0x" << hex << c << endl;
    
    c = a * b;
    cout << "Produto de a e b em formato octal: 0" << oct << c << endl;
    
    c = abs(a - b);
    cout << "Módulo da diferença entre a e b: " << c << endl;
    
    if (b != 0) {

         c = a / b;
        cout << "Quociente entre a e b: " << c << endl;
        
        if (a % b == 0) {
            cout << "a é divisível de forma exata por b." << endl;
        } else {
            cout << "a não é divisível de forma exata por b." << endl;
        }
    } else {
        cout << "A divisão por zero não é possível." << endl;
    }
    
    return 0;
}
