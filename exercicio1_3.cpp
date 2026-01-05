/*

Este exercício introduz a aplicação de structs em cálculos
matemáticos.Defina uma estrutura chamada Ponto que
contenha duas variáveis reais (x e y).

No programa principal, peça ao utilizador as coordenadas 
de dois pontos: p1 e p2.Crie uma função ou realize o 
cálculo no main para determinar a distância entre esses
dois pontos.Fórmula: 

d = sqrt((x_2-x_1)^2 + (y_2-y_1)^2)

Dica: Utilize a biblioteca <math.h> para as funções 
sqrt()e pow().

*/

#include <iostream>
#include <cmath>

using namespace std;

typedef struct {
    float x;
    float y;
} Ponto;

float calcularDistancia(Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Ponto p1, p2;

    // Pedir ao utilizador as coordenadas do primeiro ponto
    cout << "Insira as coordenadas do ponto 1 (x y): ";
    cin >> p1.x >> p1.y;

    // Pedir ao utilizador as coordenadas do segundo ponto
    cout << "Insira as coordenadas do ponto 2 (x y): ";
    cin >> p2.x >> p2.y;

    // Calcular a distância entre os dois pontos
    float distancia = calcularDistancia(p1, p2);

    // Mostrar o resultado
    cout << "A distância entre os pontos é: " << distancia << endl;

    return 0;
}