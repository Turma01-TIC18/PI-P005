#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    cout << "Digite A: ";
    cin >> a;
    cout << "Digite B ";
    cin >> b;
    cout << "Digite C: ";
    cin >> c;

    
    double delta = pow(b,2) - 4 * a * c;

    
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "O polinômio tem duas raízes reais:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "O polinômio tem uma raiz real:" << endl;
        cout << "x = " << x << endl;
    } else {
        cout << "O polinômio não tem raízes reais." << endl;
    }

    
    double x;
    cout << "Digite o valor de x para p(x): ";
    cin >> x;
    
    double px = a * pow(x,2) + b * x + c;

    cout << "p(x) = " << px << endl;

    return 0;
}

