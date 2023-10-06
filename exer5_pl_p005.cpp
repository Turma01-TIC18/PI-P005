#include <iostream>

using namespace std;

int main(){

    unsigned char infoGenetica;

    cout << "Digite a info genetica da planta (um numero entre 0 e 255): ";
    cin >> infoGenetica;

    cout << "Em binaria, a informacao genetica: ";

    for (int i = 7; i >= 0; --i) {
        cout << ((infoGenetica >> i) & 1);
        
    }

    
    int genesPresentes = 0;

    for (int i = 0; i < 8; ++i){
        genesPresentes += (infoGenetica >> i) & 1;
   
    }

    cout << "\nQuantidade de genes presentes: " << genesPresentes << endl;
    
    int geneEspecifico = infoGenetica;
    cout << "Digite o numero do gene que voce deseja encontrar: " << endl;
    cin >> geneEspecifico;

    bool geneEstaPresente = (infoGenetica >> (geneEspecifico - 1)) & 1;
    cout << "O gene " << geneEspecifico << " esta nesta planta: " << 
    (geneEstaPresente ? "Sim" : "Nao") << endl;
    

return 0;
}

