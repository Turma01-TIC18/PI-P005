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

    
    double fx = 5 * x + 2;

    
    if (y > fx) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva." << endl;
    } else if (y < fx) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na curva." << endl;
    }

    // Calcula a distância euclidiana do ponto (x, y) ao centro de coordenadas
    z = sqrt(x * x + y * y);

    // Calcula o produto entre x e y e imprime em notação científica
    double produto = x * y;
    cout << fixed << setprecision(2) << "O produto entre x e y em notação científica é: " << scientific << produto << endl;

    return 0;
}