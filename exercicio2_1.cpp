/*
Exercício 2.1: Hierarquia de Dados (Aninhamento)

Crie uma struct Data (dia, mês, ano).
Crie uma struct Tarefa (descrição, prioridade e uma Data de prazo).

Crie um programa que peça ao utilizador os dados de uma tarefa
e a sua data de entrega.

Imprima a tarefa no formato: "Tarefa: [Desc] | Prazo: [DD/MM/AAAA]".
*/

#include <iostream>

using namespace std;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    string descricao;
    int prioridade;
    Data prazo;
} Tarefa;

int main() {
    Tarefa tarefa;

    cout << "Insira a descrição da tarefa: ";
    getline(cin, tarefa.descricao);

    cout << "Insira a prioridade da tarefa (1-5): ";
    cin >> tarefa.prioridade;

    cout << "Insira a data de prazo (DD MM AAAA): ";
    cin >> tarefa.prazo.dia >> tarefa.prazo.mes >> tarefa.prazo.ano;

    cout << "\nTarefa: " << tarefa.descricao 
         << " | Prazo: " << (tarefa.prazo.dia < 10 ? "0" : "") << tarefa.prazo.dia << "/"
         << (tarefa.prazo.mes < 10 ? "0" : "") << tarefa.prazo.mes << "/"
         << tarefa.prazo.ano << "\n";

    return 0;
}   