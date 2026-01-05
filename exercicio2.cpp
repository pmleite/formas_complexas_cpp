/*
Crie um pequeno software para uma loja:
1.  Defina a `struct Produto` 
    (ID, Nome, Quantidade, Preço).
2.  Crie um array para armazenar 
    **5 produtos**.
3.  Utilize um ciclo `for` 
    para preencher o array.
4.  No final, mostre qual é o valor 
    total do stock 
    (Soma de `Quantidade * Preço` 
    de todos os produtos).
*/

#include <iostream>

using namespace std;

typedef struct {
    int id;
    string nome;
    int quantidade;
    float preco;
} Produto;

int main(){

    Produto produtos[5];
    float valorTotalStock = 0.0;

    //preencher o array
    for(int i = 0; i < 5; i++){
        cout << "Insira os dados do produto " << (i + 1) << ":\n";

        cout << "ID: ";
        cin >> produtos[i].id;
        cin.ignore(); //limpar o buffer

        cout << "Nome: ";
        getline(cin, produtos[i].nome);

        cout << "Quantidade: ";
        cin >> produtos[i].quantidade;

        cout << "Preço: ";
        cin >> produtos[i].preco;

        //calcular o valor total do stock
        valorTotalStock += produtos[i].quantidade * produtos[i].preco;

        cout << "\n";
    }

    //mostrar o valor total do stock
    cout << "Valor total do stock: " << valorTotalStock << "\n";

    return 0;
}