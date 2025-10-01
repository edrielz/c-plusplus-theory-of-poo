#include <iostream>

int main(){
    for (int mes = 1; mes <= 12; ++mes)
    {
        std::cout << "Mes " << mes << " ";
        int diasEnMes(0);
        if (mes == 2) diasEnMes = 28;
        else if (mes == 4 or mes == 6 or mes == 9 or mes == 11) diasEnMes = 30;
        else diasEnMes = 31;
        if (diasEnMes > 0)
        {
            std::cout << "dias " << diasEnMes << "\n\n";
        }
        else
        {
            std::cout << "Mes Invalido.\n\n";
        }
    }
}