#include <iostream>

int main(){ 
    int option;
    do {
        std::cout << "Menu de Opciones\n";
        std::cout << "1. Opcion 1\n";
        std::cout << "2. Salir\n";
        std::cout << "Seleccione una opcion\n";
        std::cin >> option;

        switch (option) {
            case 1:
                std::cout << "Has seleccionado la Opcion 1\n";
                break;
            case 2:
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opcion no valida, intente nuevamente.\n";
                break;
        }
    } while (option != 2);

    return 0;
}