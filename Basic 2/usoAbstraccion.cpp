#include <iostream>
using namespace std;

// Clase abstracta
class Figura {
public:
    virtual double area() = 0; // Método puro virtual
};

// Clase derivada
class Rectangulo : public Figura {
private:
    double ancho, alto;

public:
    Rectangulo(double a, double h) {
        ancho = a;
        alto = h;
    }

    double area() override {
        return ancho * alto;
    }
};

int main() {
    Rectangulo rect(4, 5);
    cout << "Area del rectangulo: " << rect.area() << endl;

    return 0;
}
