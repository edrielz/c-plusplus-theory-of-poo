#include <iostream>

int main(){
    int numero(0);
    bool positivo(true);
    std::cerr << "Digite el numero: ";
    std::cin >> numero;

    if (numero>=0){
        std::cout << "Es positivo";
        positivo = true;
    } else {
        std::cout << "Es negativo" ;
        positivo = false;
    }
}