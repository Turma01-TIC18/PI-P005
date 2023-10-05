#include <iostream>

using namespace std;

int main(){

    char ch1, ch2 = '81', ch3 = '113';
    
    cout << "Digite um caractere: ";
    cin >> ch1;

    if (ch1 >= 'A' && ch1 <= 'Z') {
        cout << "E uma letra maiuscula." << endl;

    }
    else if (ch1 >= 'a' && ch1 <= 'z') {
        cout << "E uma letra minuscula." << endl;

    }    
    else if (ch1 >= '0' && ch1 <= '9') {
        cout << "E um digito." << endl;

    }

    else{
        cout << "Outro tipo de caractere." << endl;
        
    }

    cout << "Digite outro caractere: ";
    cin >> ch1;

    char result = (ch1 >= 'A' && ch1 <= 'Z') ? 1 :
                  (ch1 >= 'a' && ch1 <= 'z') ? 2 :
                  (ch1 >= '0' && ch1 <= '9') ? 3 :
                  4;

    switch (result){
        case 1:
            cout << "Eh uma letra maiuscula." << endl;
            break;

        case 2:
            cout << "Eh uma letra minuscula." << endl;
            break;
            
        case 3:
            cout << "Eh um digito." << endl;
            break;

        case 4:
            cout << "Outro tipo de caractere." << endl;
            break;

    }

    cout << "Formato decimal: " << static_cast<int>(ch2) << endl;
    cout << "Formato octal: " << oct << static_cast<int>(ch2) << endl; 
    cout << "Formato hexadecimal: " << hex 
    << static_cast<int>(ch2) << endl;   
    cout << "Caractere: " << ch2 << endl;

    cout << "Formato decimal: " << static_cast<int>(ch3) << endl;
    cout << "Formato octal: " << oct << static_cast<int>(ch3) << endl; 
    cout << "Formato hexadecimal: " << hex 
    << static_cast<int>(ch3) << endl;   
    cout << "Caractere: " << ch3 << endl;


return 0;
}

