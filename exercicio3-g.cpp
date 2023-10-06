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

    resposta =
    b == 0 ? "A divisão por zero não é possível..." : "O quociente de a por b é: ";
    cout << resposta << endl;
    
    
    c = (b == 0)? 0 : (a / b);

    cout << "==> " << c << endl;
    
    

    return 0;
}