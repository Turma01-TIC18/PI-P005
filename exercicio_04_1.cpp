#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {
    double x, y, z;
    
    cout << "Digite o valor de x: ";
    cin >> x;
    
    cout << "Digite o valor de y: ";
    cin >> y;
    
    cout << " " << endl;

    double curva = 5 * x + 2;
    if (y < curva) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva f(x) = 5x + 2." << endl;
    } else if (y > curva) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na curva f(x) = 5x + 2." << endl;
    }
    
    z = sqrt(x * x + y * y);
    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é " << z << endl;
    
    z = x * y;
    cout << "O produto entre x e y em notação científica é " << scientific << z << endl;
    
    cout << " " << endl;
    
    return 0;
}
