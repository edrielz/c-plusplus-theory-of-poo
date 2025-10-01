#include <iostream>
using namespace std;

// Clase base
class Animal {
protected:
    string nombre;

public:
    Animal(string n) : nombre(n) {}
    virtual void hacerSonido() {
        cout << "Algún sonido" << endl;
    }
};

// Clase derivada Perro
class Perro : public Animal {
public:
    Perro(string n) : Animal(n) {}
    void hacerSonido() override {
        cout << nombre << " dice: Guau!" << endl;
    }
};

// Clase derivada Gato
class Gato : public Animal {
public:
    Gato(string n) : Animal(n) {}
    void hacerSonido() override {
        cout << nombre << " dice: Miau!" << endl;
    }
};

int main() {
    Perro perro("Firulais");
    Gato gato("Michi");

    perro.hacerSonido();
    gato.hacerSonido();

    return 0;
}
