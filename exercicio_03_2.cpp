#include <iostream>
#include <limits>

using namespace std;


int main() {
    int numero;
    
    
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    
    const char* resultado = (numero >= numeric_limits<short>::min() && numero <= numeric_limits<short>::max()) 
        ? "este valor pertence ao intervalo dos short int" 
        : "e maior que um short int";
    
    
    cout << "O valor fornecido é " << numero << " " << resultado << endl;
    cout << " " << endl;
    
    
    return 0;
}
