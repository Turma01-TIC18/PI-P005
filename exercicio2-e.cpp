#include <iostream>

using namespace std;

int main() {
    char ch1, ch2, ch3;
    
    ch2 = 'D';
    ch3 = ch2;

    cout << "Em hexadecimal: " << hex << int(ch3) << endl;
    cout << "Em Octal: " << oct << int(ch3)<< endl;
    cout << "Em Decimal: " << dec << int(ch3) << endl;
    cout << "Em Numérico: " << int(ch3) << endl;
    cout << "Em Caractere: " << ch3 << endl;
    

    return 0;
}