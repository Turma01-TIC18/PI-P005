#include <iostream>

using namespace std;

int main() {
    unsigned char infoGenetica;
    cout << "Digite a informação genética da planta (um número entre 0 e 255): ";
    cin >> infoGenetica;
    
    unsigned char mascara = 0xFF;
    
    int genesPresentes = 0;
    
    for (int i = 0; i < 8; i++) {
        if ((infoGenetica & (mascara >> i)) != 0) {
            genesPresentes++;
        }
    }
    
    cout << "Número de genes presentes: " << genesPresentes << endl;
    cout << " " << endl;
    
    int numeroGene;
    cout << "Digite um número de gene específico (entre 1 e 8): ";
    cin >> numeroGene;
    
    if (numeroGene >= 1 && numeroGene <= 8) {
        unsigned char geneEspecifico = 1 << (numeroGene - 1);
        if ((infoGenetica & geneEspecifico) != 0) {
            cout << "O gene " << numeroGene << " está presente nesta planta." << endl;
        } else {
            cout << "O gene " << numeroGene << " não está presente nesta planta." << endl;
        }
    } else {
        cout << "Número de gene inválido. Deve estar entre 1 e 8." << endl;
    }
    cout << " " << endl;
    return 0;
}
