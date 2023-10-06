#include <iostream>

using namespace std;

int main() {
    int num;
    short int shortMax = 32767;
    short int shortMin = -32767;

    cout << "Digite um número inteiro: ";
    cin >> num;

   
    cout << num << (num > shortMax || num < shortMin ? " é maior que um short int" : " pertence ao intervalo dos short int") << endl;

    return 0;
}
