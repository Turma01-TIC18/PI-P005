#include <iostream>

using namespace std;

int main() {
    char ch1, ch2, ch3;
    
    ch2 = 81;

    cout << "Em hexadecimal: " << hex << int(ch2) << endl;
    cout << "Em Octal: " << oct << int(ch2)<< endl;
    cout << "Em Decimal: " << dec << int(ch2) << endl;
    cout << "Em Numérico: " << int(ch2) << endl;
    cout << "Em Caractere: " << ch2 << endl;
    

    return 0;
}