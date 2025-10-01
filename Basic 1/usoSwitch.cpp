#include <iostream>
int main() {
    int option;
    while (true) {
        std::cout << "Menu de Opciones:\n";
        std::cout << "1. Opcion 1\n";
        std::cout << "2. Opcion 2\n";
        std::cout << "3. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> option;
        switch (option) {
            case 1:
             std::cout << "Has Seleccionado la Opcion 1\n";
             break;
            case 2:
             std::cout << "Has Seleccionado la Opcion 2\n";
             break;
            case 3:
             std::cout << "Saliendo del programa...\n";
             return 0;
            default:
             std::cout << "Opcion no valida. Intente Nuevamente.\n";
             break;
        }
    }
}