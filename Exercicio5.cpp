#include <iostream>

using namespace std;

int main() {
    

    unsigned char informacaoGenetica;
    cout << "Informe a informacao genetica da planta (um numero de 0 a 255): ";
    cin >> informacaoGenetica;

    
    int genesPresentes = 0;
    for (int i = 0; i < 8; i++) {
        if (informacaoGenetica & (1 << i)) {
            genesPresentes++;
        }
    }

    cout << "Numero de genes presentes na planta: " << genesPresentes << endl;

    
    int geneEspecifico;
    cout << "Informe o número do gene específico (entre 1 e 8): ";
    cin.ignore();
    cin >> geneEspecifico;

    
    if (geneEspecifico >= 1 && geneEspecifico <= 8) {
        bool presente = informacaoGenetica & (1 << (geneEspecifico - 1));
        if (presente) {
            cout << "O gene " << geneEspecifico << " esta presente na planta." << endl;
        } else {
            cout << "O gene " << geneEspecifico << " nao esta presente na planta." << endl;
        }
    } else {
        cout << "Numero de gene inválido. Deve estar entre 1 e 8." << endl;
    }

    return 0;
}
