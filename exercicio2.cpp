#include <iostream>

using namespace std;

int main() {
    // Exercício a:
    char ch1, ch2, ch3;
    int convert;

    // Exercício b:
    cout << "Digite um caractere: " << endl;
    cin >> ch1;

    // Exercício c:
    if (isupper(ch1)) {
        cout << "Eh maiusculo!" << endl;
    } else if (islower(ch1)) {
        cout << "Eh minusculo!" << endl;
    } else if (isdigit(ch1)) {
        cout << "Eh um digito!" << endl;
    } else {
        cout << "Outro tipo de caractere." << endl;
    }

    // Exercício e:
    ch2 = 81;
    convert = static_cast<int>(ch2);
    cout << "\nCarac - Dec - Oct - Hex" << endl;    
    cout << ch2 << " - " << dec << convert << " - " << oct << convert << " - " << hex << convert;
    
    // Exercício f:
    ch3 = 'q';
    convert = static_cast<int>(ch3);
    cout << "\n\nCarac - Dec - Oct - Hex" << endl;    
    cout << ch3 << " - " << dec << convert << " - " << oct << convert << " - " << hex << convert;
    
    return 0;
}
