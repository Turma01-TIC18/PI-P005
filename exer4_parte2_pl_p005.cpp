#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a, b, c;
    
    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    cout << "Digite o valor de c: ";
    cin >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {        
        double raiz1 = (-b + sqrt(delta)) / (2 * a);
        double raiz2 = (-b - sqrt(delta)) / (2 * a);

        cout << "O polinomio tem duas raizes reais diferentes:" << endl;
        cout << "O valor de x1: " << raiz1 << endl;
        cout << "O valor de x2: " << raiz2 << endl;

    } 
    else if (delta == 0) {        
        double raiz = -b / (2 * a);

        cout << "O polinomio tem uma raiz real iguais:" << endl;
        cout << "Raiz: " << raiz << endl;

    } 
    else {        
        cout << "O polinomio nao tem raizes reais." << endl;

    }

return 0;
}