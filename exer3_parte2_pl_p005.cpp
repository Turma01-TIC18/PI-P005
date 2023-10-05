#include <iostream>

using namespace std;

int main() {
    int numInteiro;

    cout << "Digite um numero inteiro: ";
    cin >> numInteiro;
    
    cout << "O valor eh: " << numInteiro << (numInteiro > 
    SHRT_MAX || numInteiro < SHRT_MIN ? "\ne maior que um short int." : 
    "\neste valor pertence ao intervalo dos short int.") << endl;

return 0;
}
