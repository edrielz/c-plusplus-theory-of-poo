#include <iostream>

int main() {
    const int meses(12);
    int i = 1;
    while( i <= meses)
    {
        if(i<= 6) std::cout << "El mes " << i << " primer semestre" << std::endl;
        else std::cout << "El mes " << i << " segundo semestre" << std::endl;
        i++;
    }
}