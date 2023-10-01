#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x, y, z;

    cout << "Digite a coordenada x: ";
    cin >> x;
    cout << "Digite a coordenada y: ";
    cin >> y;

    // Identificar em que lado da curva se encontra f(x) = 5x + 2
    double curva = (5 * x) + 2;
    if (y > curva) {
        cout << "O ponto (" << x << ", " << y << ") esta acima da curva." << endl;
    } 
    else {
        if (y < curva) {
            cout << "O ponto (" << x << ", " << y << ") esta abaixo da curva." << endl;
        }
        else {
            cout << "O ponto (" << x << ", " << y << ") esta na curva." << endl;
        }
    }

    // Calcular a distância do ponto (x, y) ao centro
    z = sqrt(x * x + y * y);
    cout << "Distancia euclidiana ao centro de coordenadas: " << z << endl;

    // Calcular o produto entre x e y e imprimir em notação científica
    z = x * y;
    cout << "Produto de x e y em notacaoo cientifica: " << scientific << z << endl;

    return 0;
}