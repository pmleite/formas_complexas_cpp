/*
Enunciado: Crie um programa para gerir uma pequena frota de veículos.
Definição da Estrutura: Crie uma struct Veiculo com os seguintes campos:

    -Marca (string), -Modelo (string),  -Ano (inteiro)
    -Matricula (string)
    -Combustivel (inteiro: 1 para Gasolina, 2 para Gasóleo, 3 para Elétrico)

    Operações:
    -O programa deve permitir o registo de 6 veículos num array 
    de estruturas.
    -Após o registo, o utilizador deve poder introduzir 
    um Ano (ex: 2020).
    -O programa deve listar todos os veículos da frota que foram 
    fabricados nesse ano ou em anos posteriores.
    -Se nenhum veículo for encontrado, deve apresentar uma mensagem 
    de aviso.

Desafio Extra:
No final da listagem, o programa deve indicar a percentagem de veículos Elétricos na frota.
*/

#include <iostream>

using namespace std;

typedef struct {
    string marca;
    string modelo;
    int ano;
    string matricula;
    int combustivel;
} Veiculo;

int main(){ 
    Veiculo frota[6];
    int anoConsulta;
    int countEletricos = 0;     
    int totalVeiculos = 6;

    //preencher o array
    for(int i = 0; i < totalVeiculos; i++){
        cout << "Insira os dados do veículo " << (i + 1) << ":\n";

        cout << "Marca: ";
        getline(cin, frota[i].marca);

        cout << "Modelo: ";
        getline(cin, frota[i].modelo);

        cout << "Ano: ";
        cin >> frota[i].ano;

        cout << "Matrícula: ";
        cin >> frota[i].matricula;

        cout << "Combustivel (1 para Gasolina, 2 para Gasóleo, 3 para Elétrico): ";
        cin >> frota[i].combustivel;

        cout << "\n";
    }

    cout << "Insira o ano de consulta: ";
    cin >> anoConsulta; 
    cin.ignore(); // Limpar o buffer do cin
    bool encontrado = false;
    cout << "\nVeículos fabricados em " << anoConsulta << " ou anos posteriores:\n";
    for(int i = 0; i < totalVeiculos; i++){
        if(frota[i].ano <= anoConsulta){
            cout << "Marca: " << frota[i].marca << ", Modelo: " << frota[i].modelo 
                 << ", Ano: " << frota[i].ano << ", Matrícula: " << frota[i].matricula 
                 << ", Combustível: " << (frota[i].combustivel == 1 ? "Gasolina" : 
                                         frota[i].combustivel == 2 ? "Gasóleo" : "Elétrico") << "\n";
            encontrado = true;
        }
        if(frota[i].combustivel == 3){
            countEletricos++;
        }
    }

    if(!encontrado){
        cout << "Nenhum veículo encontrado para o ano de consulta.\n";
    }

    float percentagemEletricos = (countEletricos * 100.0) / totalVeiculos;
    cout << "\nPercentagem de veículos elétricos na frota: " << percentagemEletricos << "%\n";

    return 0;
}   




