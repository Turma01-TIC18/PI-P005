#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x, y, z;

    
    cout << "Digite x: ";
    cin >> x;
    cout << "Digite y: ";
    cin >> y;

    
    double fx = 5 * x + 2;

    
    if (y > fx) {
        cout << "Os pontos (" << x << ", " << y << ") estão acima da curva." << endl;
    } else if (y < fx) {
        cout << "Os pontos (" << x << ", " << y << ") estão abaixo da curva." << endl;
    } else {
        cout << "Os pontos (" << x << ", " << y << ") estão sobre a curva." << endl;
    }

    
    z = sqrt(pow(x,2) + pow(y,2));

   
    cout << "Distância euclidiana de (" << x << ", " << y << ") ao centro de coordenadas: " << z << endl;

    
    z = x * y;
    cout << "Produto de x e y em notação científica: " << scientific << z << endl;

    return 0;
}
