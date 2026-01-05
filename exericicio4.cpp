/*
Crie uma estrutura Atleta com: 
    Nome (string)
    Modalidade (string)
    Recorde Pessoal (float).

Crie um array para armazenar 4 atletas.

Após a leitura dos dados, o programa deve percorrer 
o array e indicar:

    - O nome do atleta com o melhor
      recorde (maior valor).

    - A média dos recordes de todos 
      os atletas inseridos.    
*/

#include <iostream>
#include <string>

using namespace std;

struct Atleta {
    string nome;
    string modalidade;
    float recordePessoal;
};

int main() {
    Atleta atletas[4];
    float somaRecordes = 0.0;
    int indiceMelhorAtleta = 0;

    // Leitura dos dados dos atletas
    for (int i = 0; i < 4; i++) {
        cout << "Digite o nome do atleta " << (i + 1) << ": ";
        getline(cin, atletas[i].nome);
        cout << "Digite a modalidade do atleta " << (i + 1) << ": ";
        getline(cin, atletas[i].modalidade);
        cout << "Digite o recorde pessoal do atleta " << (i + 1) << ": ";
        cin >> atletas[i].recordePessoal;
        cin.ignore(); // Limpar o buffer do teclado

        somaRecordes += atletas[i].recordePessoal;

        // Verificar se este atleta tem o melhor recorde
        if (atletas[i].recordePessoal > atletas[indiceMelhorAtleta].recordePessoal) {
            indiceMelhorAtleta = i;
        }
    }

    // Cálculo da média dos recordes
    float mediaRecordes = somaRecordes / 4.0;

    // Exibição dos resultados
    cout << "\nAtleta com o melhor recorde:\n";
    cout << "Nome: " << atletas[indiceMelhorAtleta].nome << "\n";
    cout << "Modalidade: " << atletas[indiceMelhorAtleta].modalidade << "\n";
    cout << "Recorde Pessoal: " << atletas[indiceMelhorAtleta].recordePessoal << "\n";

    cout << "\nMédia dos recordes de todos os atletas: " << mediaRecordes << "\n";

    return 0;
}
