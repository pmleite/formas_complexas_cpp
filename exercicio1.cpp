/*
1.  Defina uma `struct Aluno` com: 
        Nome,
        Número de Estudante
        Média Final.
2.  Declare uma variável desse tipo.
3.  Peça ao utilizador para inserir os dados
    via teclado.
4.  Imprima os dados no ecrã com uma
    formatação limpa e simples.
*/

#include <iostream>

using namespace std;

typedef struct {
    string nome;
    int numeroEstudante;
    float mediaFinal;
} Aluno;

int main(){
 
    Aluno estudante;

    //inserir dados com fgets
    cout << "Insira o nome do aluno: ";
    getline(cin, estudante.nome);

    cout << "Insira o número do estudante: ";
    cin >> estudante.numeroEstudante;

    cout << "Insira a média final: ";
    cin >> estudante.mediaFinal;

    //imprimir os dados
    cout << "\nDados do Aluno:\n";
    cout << "Nome: " << estudante.nome << "\n";
    cout << "Número de Estudante: " << estudante.numeroEstudante << "\n";
    cout << "Média Final: " << estudante.mediaFinal << "\n";

    return 0;
}