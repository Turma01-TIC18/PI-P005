#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    char ch1, ch2, ch3;
    cout << "Digite apenas 1 caracter: " << endl;
    cin >> ch1;

    (ch1 >= 65 && ch1 <=90) ? (cout << "Letra maiuscula" << endl) : (cout << "");
    (ch1 >= 97 && ch1 <=122) ? (cout << "Letra minuscula" << endl) : (cout << "");
    (ch1 >= 48 && ch1 <=57) ? (cout << "Um digito" << endl) : (cout << "");
    (!(ch1 >= 65 && ch1 <=90) && !(ch1 >= 48 && ch1 <=57) && !(ch1 >= 97 && ch1 <=122)) ? (cout << "Outro caracter" << endl) : (cout << "");

   


    return 0;
}