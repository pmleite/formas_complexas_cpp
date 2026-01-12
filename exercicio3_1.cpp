/*
Exericicio #1
Cria uma classe chamada "ContaBancaria" que representa
uma conta bancária simples.
 classe deve ter os seguintes atributos 
 privados: número da conta (string), 
 nome do titular (string)
 saldo (double).
 A classe deve ter os seguintes métodos públicos:
 - Construtor que inicializa
    número da conta,    
    nome do titular,
    saldo inicial.

 - Método creditar(double valor): 
   adiciona o valor ao saldo da conta. 
 - Método debitar(double valor):
    subtrai o valor do saldo da conta, 
    desde que haja saldo suficiente; 
    caso contrário, exibe uma mensagem de erro.
*/

#include <iostream>
using namespace std;

class ContaBancaria{

    private:
        string numeroConta;
        string nomeTitular;
        double saldo;

    public:
        ContaBancaria(string numeroConta, string nomeTitular, double saldo){
            // Inicializa os atributos sem tentar chamar um método inexistente
            system("clear");
            this->numeroConta = numeroConta;
            this->nomeTitular = nomeTitular;
            this->saldo = saldo;
        }

        void creditar(double valor){
            // Pede valor a adicionar ao saldo
            cout << "Insira o valor a adicionar ao saldo: ";
            cin >> valor;
            this->saldo += valor;
        }

        void debitar(double valor){
            // Pede valor a subtrair do saldo
            cout << "Insira o valor a debitar do saldo: ";
            cin >> valor;
            if(valor <= this->saldo){
                this->saldo -= valor;
            } else {
                cout << "Erro: Saldo insuficiente." << endl;
            }
        }

        void exibirSaldo(){
            cout << "Saldo atual: " << this->saldo << endl;
        }
        
};

int main(){
    ContaBancaria minhaConta("123456", "João", 1000.0);

    minhaConta.exibirSaldo();
    minhaConta.creditar(500.0);
    minhaConta.exibirSaldo();
    minhaConta.debitar(200.0);
    minhaConta.exibirSaldo();

    return 0;
}

//