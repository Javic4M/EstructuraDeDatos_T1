#include <iostream>
#include <string>
using namespace std;

int main() {
    int listaDeNumero[10] = {1,15,4,8,12,2,7,3,3,10};
    int temporal = 0;

    // La complejidad de esta parte del codigo se puede definir como O(n * n) = O(n^2)
    // El primer for se representa como n ya que se puede repetir n vecez 
    for (int i = 0; i < sizeof(listaDeNumero)/sizeof(*listaDeNumero); i++) {

        // El segundo for se representa como n ya que se puede repetir n vecez
        for (int j = 0; j < (sizeof(listaDeNumero)/sizeof(*listaDeNumero) - 1); j++) {

            // Como siempre se tiene que comparar los dos números, la condicional se vuelve una constante y se representa con 1
            if (listaDeNumero[j] > listaDeNumero[j+1]) {
                // Dado que podemos entrar o no al if esta parte del codigo se presenta como 1 o 0
                temporal = listaDeNumero[j];
                listaDeNumero[j] = listaDeNumero[j+1];
                listaDeNumero[j+1] = temporal;
            }
        }
    }

    // La Complejidad de esta parte del codigo se puede definir como O(n)
    // El tercer for se representa como n ya que se puede repetir n vecez
    for (int i = 0; i < 10; i++) {
        cout << listaDeNumero[i] << endl;
    }
    
    return 0;
}