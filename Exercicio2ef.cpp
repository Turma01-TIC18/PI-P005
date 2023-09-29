#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    char ch1, ch2, ch3;

    ch2 = 81;

    cout << "Caracter em formato de caracter " << ch2 << endl;
    cout << "Caracter em formato de hexadecimal " << hex << int (ch2) << endl;
    cout << "Caracter em formato de octal " << oct << int (ch2) << endl;
    cout << "Caracter em formato de decimal " << dec << int (ch2) << endl;

    ch3 = tolower(ch2);

    cout << "Caracter ch3 em formato de caracter : " << ch3 << endl;
    cout << "Caracter em formato de hexadecimal " << hex << int (ch3) << endl;
    cout << "Caracter em formato de octal " << oct << int (ch3) << endl;
    cout << "Caracter em formato de decimal " << dec << int (ch3) << endl;



    return 0;
}