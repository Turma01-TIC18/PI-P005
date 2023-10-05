#include <iostream>

using namespace std;



int main() {
    char ch1, ch2, ch3;
    
    
    cout << "Digite um caractere: ";
    cin >> ch1;
    
    
    string tipo;
    tipo = (ch1 >= 'A' && ch1 <= 'Z') ? "letra maiúscula" :
           (ch1 >= 'a' && ch1 <= 'z') ? "letra minúscula" :
           (ch1 >= '0' && ch1 <= '9') ? "dígito" : "outro tipo de caractere";
    
    cout << "O caractere digitado é " << tipo << endl;
    cout << " " << endl;
    
    
    ch2 = 81;
    
    
    cout << "Valor decimal de ch2: " << static_cast<int>(ch2) << endl;
    cout << "Valor octal de ch2: " << oct << static_cast<int>(ch2) << endl;
    cout << "Valor hexadecimal de ch2: " << hex << static_cast<int>(ch2) << endl;
    cout << " " << endl;
    cout << "Caractere ch2: " << ch2 << endl;
    
   

    if (ch2 >= 'A' && ch2 <= 'Z') {
        ch3 = ch2 + ('a' - 'A');
        
        cout << "Caractere minúsculo correspondente a ch2: " << ch3 << endl;
        cout << " " << endl;
        cout << "Valor decimal de ch3: " << static_cast<int>(ch3) << endl;
        cout << "Valor octal de ch3: " << oct << static_cast<int>(ch3) << endl;
        cout << "Valor hexadecimal de ch3: " << hex << static_cast<int>(ch3) << endl;

        cout << " " << endl;
    } else {
        cout << "ch2 não é uma letra maiúscula." << endl;
    }
    
    return 0;
}
