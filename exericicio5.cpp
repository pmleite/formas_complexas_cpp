/*
Defina a estrutura ContaBancaria com: 
    -Nome do Titular,
    -Número da Conta 
    -Saldo.

Inicialize uma conta com um saldo inicial de 500.00€.

Crie um menu simples (usando switch ou if/else) 
que permita ao utilizador:

 -Consultar Saldo: Mostra o valor atual.
 -Depositar: Pede um valor ao utilizador e soma 
             ao saldo atual da struct.
 -Levantar: Pede um valor e subtrai ao saldo 
            (verifique primeiro se existe saldo suficiente).

Sair.
*/
#include <iostream>
#include <string>

using namespace std;

typedef struct {
    string nomeTitular;
    ulong numeroConta;
    double saldo;
}ContaBancaria;

void mostrarSaldo(const ContaBancaria &conta) {
    cout << "Saldo atual: " << conta.saldo << "€" << endl;
}

void depositar(ContaBancaria &conta, double valor) {
    conta.saldo += valor;
    cout << "Depósito de " << valor << "€ realizado com sucesso." << endl;
}

bool levantar(ContaBancaria &conta, double valor) {
    if (valor > conta.saldo) {
        cout << "Saldo insuficiente para levantar " << valor << "€." << endl;
        return false;
    }
    conta.saldo -= valor;
    cout << "Levantamento de " << valor << "€ realizado com sucesso." << endl;
    return true;
}

int main() {
    ContaBancaria conta;
    conta.saldo = 500.00;

    int opcao;
    double valor;


    do {
        cout << "\nMenu:\n";
        cout << "1. Consultar Saldo\n";
        cout << "2. Depositar\n";
        cout << "3. Levantar\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                mostrarSaldo(conta);
                break;
            case 2:
                cout << "Insira o valor a depositar: ";
                cin >> valor;
                depositar(conta, valor);
                break;
            case 3:
                cout << "Insira o valor a levantar: ";
                cin >> valor;
                levantar(conta, valor);
                break;
            case 4:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 4);

    return 0;
}