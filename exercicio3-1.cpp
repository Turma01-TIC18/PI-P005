#include <iostream>
#include <limits>

using namespace std;

int main() {
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    cout << "O numero fornecido eh(" << numero << ") é " << (numero > numeric_limits<short>::max() ? "maior que um short int." : "este valor pertence ao intervalo dos short int.") << endl;

    return 0;
}