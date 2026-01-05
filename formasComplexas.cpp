//Formas complexas.cpp

#include <iostream>

using namespace std;

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