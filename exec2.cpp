#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    char ch1, ch2, ch3;
    /* cout << "Digite apenas 1 caracter: " << endl;
    cin >> ch1;

    (ch1 >= 65 && ch1 <=90) ? (cout << "Letra maiuscula" << endl) : (cout << "");
    (ch1 >= 97 && ch1 <=122) ? (cout << "Letra minuscula" << endl) : (cout << "");
    (ch1 >= 48 && ch1 <=57) ? (cout << "Um digito" << endl) : (cout << "");
    (!(ch1 >= 65 && ch1 <=90) && !(ch1 >= 48 && ch1 <=57) && !(ch1 >= 97 && ch1 <=122)) ? (cout << "Outro caracter" << endl) : (cout << "");*/

    ch2 = 81;

    cout << "Caracter em formato de caracter " << ch2 << endl;
    cout << "Caracter em formato de hexadecimal " << hex << ch2 << endl;
    cout << "Caracter em formato de octal " << oct << ch2 << endl;
    cout << "Caracter em formato de decimal " << dec << ch2 << endl;

    ch3 = tolower(ch2);

    cout << "Caracter ch3 em formato de caracter : " << ch3 << endl;
    cout << "Caracter em formato de hexadecimal " << hex << ch3 << endl;
    cout << "Caracter em formato de octal " << oct << ch3 << endl;
    cout << "Caracter em formato de decimal " << dec << ch3 << endl;

    int a=2;
    cout << "Caracter em formato de hexadecimal " << hex << a << endl;
    cout << "Caracter em formato de octal " << oct << a << endl;
    cout << "Caracter em formato de decimal " << dec << a << endl;


    return 0;
}