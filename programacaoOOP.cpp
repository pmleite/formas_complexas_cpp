#include <iostream>
using namespace std;

// Classe Carro
class MakeHashCode{
    
    private:
        string nome;
        int idade;
        float altura;


    public:
        //Construtor
        MakeHashCode(string n, int i, float a){
            nome = n;
            idade = i;
            altura = a;
        }

        //Getters
        string getNome(){
            return nome;
        }

        int getIdade(){
            return idade;
        }

        float getAltura(){
            return altura;
        }

        //Setters
        void setNome(string n){
            nome = n;
        }

        void setIdade(int i){
            idade = i;
        }

        void setAltura(float a){
            altura = a;
        }
      
};


int main(){

    MakeHashCode myHash("João", 30, 1.75);

    printf("Nome: %s\n", myHash.getNome().c_str());
    myHash.setNome("Maria");
    printf("Nome: %s\n", myHash.getNome().c_str()); 
   
   

    return 0;
}

