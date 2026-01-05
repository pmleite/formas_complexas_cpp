//Formas complexas.cpp

#include <iostream>

using namespace std;

/*
 * Aninhamento de structs 
 */

typedef struct{
    string rua;
    string nunPolicia;
    string codPostal;
} Morada;

typedef struct{
    string nome;
    Morada morada;
}Pessoa;


int main(){

    system("clear");

    Pessoa pessoa1;
    pessoa1 = {"paulo",{"rua abc","2ºRch/drt","9500-123"}};

    //imprime dados as pessoas
    cout << "Nome: " << pessoa1.nome << "\n";
    cout << "Morada: " << pessoa1.morada.rua << ", " << pessoa1.morada.nunPolicia 
         << ", " << pessoa1.morada.codPostal << "\n";


    return 0;
}









/*
typedef struct {
    string titulo;
    string autor;
    int paginas;
    float preco;
} Livro;

Livro biblioteca[100];

//criando uma variável do tipo Livro
Livro oMeuLivro = {"abc", "cde", 234, 12.55};

int main(){

    printf("Titulo: %s\n", oMeuLivro.titulo.c_str());
    return 0;
}
*/