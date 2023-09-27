#include <iostream>

using namespace std;

int main() {
    char ch1, ch2, ch3; 
    string resposta;

    cout << "Digite um caracter"; 
    cin >> ch1;

    resposta = 
    ch1 >= 48 && ch1 <= 57? "Dígito"
    : ch1 >= 65 && ch1 <= 90? "Letra Maiúscula" 
    : ch1 >= 97 && ch1 <= 122? "Letra Minúscula" 
    : "Outro Tipo de Caractere";

    cout << resposta << endl;
    
    

    return 0;
}