#include <iostream>
#include <ctype.h>
#include <cmath>

using namespace std;

int main(){

    int a, b, c;

    cout << "Digite dois numeros inteiros (seguido de ENTER): " << endl;
    cin >> a >> b;

    c = a + b;

    cout << "Resultado da soma de a e b em formato hexadecimal: " << hex << c << endl;

    c = a * b;

    cout << "Resultado da soma de a e b em formato octal: " << oct << c << endl;

    c = a - b;

    (c < 0) ? (cout << "Modulo de a - b: " << -c << endl) : (cout << "Modulo de a - b: " << c << endl);

    c = abs(a-b);

    cout << "Modulo de a - b (com biblioteca nativa do C++): " << c << endl;

    c = (b!=0) ? (a/b) : (-1);


    (c==-1 && abs(a)!=abs(b)) ? (cout << "Divisao por 0 nao eh possivel" << endl) : (cout << "Resultado da divisao de a por b: " << c << endl);

    (a % b == 0) ? (cout << "A eh divisivel de forma exata por B" << endl ): (cout << "A nao e divisivel de forma exata por B" << endl);






    return 0;
}