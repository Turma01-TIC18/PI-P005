#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double x, y, z, fx;

    cout <<"Digite dois numero: " << endl;
    cin >> x >> y;

    fx = (5 * x ) + 2;

    cout << ((y < fx) ? "Lado Direito" : (y > fx) ? 
    "Lado Esquerdo" : "Na curva") << endl;

    z = sqrt(x * x + y * y);
    
    cout << "Os valores de entrada sao: x = " << x << " e y = " 
    << y << endl;
    cout << "A distancia do centro de coordenadas: " << z << endl;

    z = x * y;

    cout << "O valor de z em notacao eh: " << scientific << z << endl;
    
return 0;
}