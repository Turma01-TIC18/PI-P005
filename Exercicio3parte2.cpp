#include <iostream>
#include <limits>

using namespace std;

int main(){

    int a;

    cout << "Digite um numero inteiro: " << endl;
    cin >> a;


    (a >= std::numeric_limits<short int>::min() && a <= std::numeric_limits<short int>::max()) ? (cout << "este valor pertence ao intervalo dos short int" << endl) : (cout << "e maior que um short int" << endl);







    return 0;
}