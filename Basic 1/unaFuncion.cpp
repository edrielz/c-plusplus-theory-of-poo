#include <iostream>

int sumar ( int a, int b) { return a + b; }
int main(){
    int resultado = sumar (3, 4);
    std::cout << "La suma de 3 y 4 es: " << resultado << std::endl;
    return 0;
}