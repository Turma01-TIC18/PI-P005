#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int a,b,c;
    string resposta;

    cout << "Digite o primeiro número inteiro: ";
    cin >> a;
    cout << "Digite o segundo número inteiro: ";
    cin >> b;

    

    cout << "----------------------------------" << endl;
    (a % b == 0) ? (cout << "a é divisível de forma exata por b\n" ): (cout << "a não é divisível de forma exata por b\n");
    
    
    

    return 0;
}