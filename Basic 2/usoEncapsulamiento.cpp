#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    string titular;
    double saldo;

public:
    CuentaBancaria(string t, double s) {
        titular = t;
        saldo = s;
    }

    void depositar(double monto) {
        saldo += monto;
    }

    bool retirar(double monto) {
        if (monto <= saldo) {
            saldo -= monto;
            return true;
        }
        return false;
    }

    void mostrarSaldo() {
        cout << "Saldo disponible: " << saldo << endl;
    }
};

int main() {
    CuentaBancaria cuenta("Ana", 1000);
    cuenta.depositar(500);
    cuenta.mostrarSaldo();

    cuenta.retirar(200);
    cuenta.mostrarSaldo();

    return 0;
}
