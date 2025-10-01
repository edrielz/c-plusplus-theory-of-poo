#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    // Constructor
    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }

    // Método
    void saludar() {
        cout << "Hola, me llamo " << nombre 
             << " y tengo " << edad << " años." << endl;
    }
};

int main() {
    Persona persona1("Carlos", 30);
    persona1.saludar();

    return 0;
}
