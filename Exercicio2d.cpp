#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
    
    char ch1, ch2, ch3;
    cout << "Digite apenas 1 caracter: " << endl;
    cin >> ch1;

    isupper(ch1) ? (cout << "Letra maiuscula" << endl) : (cout << "");
    islower(ch1) ? (cout << "Letra minuscula" << endl) : (cout << "");
    isdigit(ch1) ? (cout << "Um digito" << endl) : (cout << "");
    (!isdigit(ch1) && !isupper(ch1) && !islower(ch1)) ? (cout << "Outro caracter" << endl) : (cout << "");


    return 0;
}