#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    
    cout << "Digite o coeficiente 'a': ";
    cin >> a;
    cout << "Digite o coeficiente 'b': ";
    cin >> b;
    cout << "Digite o coeficiente 'c': ";
    cin >> c;

    
    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        
        double raiz1 = (-b + sqrt(delta)) / (2 * a);
        double raiz2 = (-b - sqrt(delta)) / (2 * a);
        cout << "O polinomio tem duas raizes reais distintas:" << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (delta == 0) {
        
        double raiz = -b / (2 * a);
        cout << "O polinomio tem uma raiz real (raiz dupla):" << endl;
        cout << "Raiz: " << raiz << endl;
    } else {
        
        cout << "O polinomio nao tem raizes reais." << endl;
    }

   
    double x;
    cout << "Digite um valor para x: ";
    cin >> x;

    
    double px = a * x * x + b * x + c;
    cout << "O valor de p(x) para x = " << x << " é: " << px << endl;

    return 0;
}
