#include <iostream>
#include <cmath>

using namespace std;


int main() {
    double a, b, c, x;
    
    cout << "Digite o coeficiente a: ";
    cin >> a;
    
    cout << "Digite o coeficiente b: ";
    cin >> b;
    
    cout << "Digite o coeficiente c: ";
    cin >> c;

    cout << " " << endl;

    
    double discriminante = b * b - 4 * a * c;
    
    if (discriminante > 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "O polinômio tem duas raízes reais: " << raiz1 << " e " << raiz2 << endl;
    } else if (discriminante == 0) {
        double raiz = -b / (2 * a);
        cout << "O polinômio tem uma raiz real: " << raiz << endl;
    } else {
        cout << "O polinômio não tem raízes reais." << endl;
    }
   
    cout << " " << endl;
    cout << "Digite o valor de x: ";
    cin >> x;
    
    double px = a * x * x + b * x + c;
    cout << "O valor de p(x) é: " << px << endl;
    
    cout << " " << endl;
    
    return 0;
}
