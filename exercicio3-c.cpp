#include <iostream>


using namespace std;

int main() {
    int a,b,c;

    cout << "Digite o primeiro número inteiro: ";
    cin >> a;
    cout << "Digite o segundo número inteiro: ";
    cin >> b;

    c = a + b;

    cout << "A soma da variável a e b em hexadeximal é: " << hex << c << endl;

    

    return 0;
}