#include <iostream>

using namespace std;

int main (){

    int a, b, c;

    cout << "Digite um numero: " << endl;
    cin >> a >> b;

    cout << a << " " << b;

    c = a + b;

    cout << "\nFormato hexadecimal: " << hex << static_cast<int>(c) << endl;

    c = a * b;

    cout << "Formato hexadecimal: " << oct << static_cast<int>(c) << endl;

    c = (a > b) ? (a - b) : (b - a);

    cout << "O valor absoluto da diferenca entre a e b e: " << c << endl;

    //Calculando o mesmo módulo diretamente
    c = abs(a - b);

    if (b == 0) {
        cout << "A divisao por zero nao e possivel." << endl;
    } 
    else {        
        c = a / b;        
        cout << "O quociente entre a e b eh: " << c << endl;
        
        if (a % b == 0) {
            cout << "a eh divisivel por b de forma exata." << endl;

        } 
        else {
            cout << "a nao eh divisivel por b de forma exata." << endl;

        }
    }
return 0;
}