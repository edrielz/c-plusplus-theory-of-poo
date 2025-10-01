#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

float calcularPromedioEstudiante(vector<float> notasEstudiante) {
    float suma(0);
    for (float nota : notasEstudiante)
      suma += nota;
    return suma / notasEstudiante.size();
}

float calcularPromedioCurso(vector<vector<float>>notas) {
    float sumaTotal(
      0);
    int totalNotas(0);
    for (auto notasEstudiante : notas)
      for (float nota : notasEstudiante) {
        sumaTotal += nota;
        ++totalNotas;
      }
    return sumaTotal / totalNotas;
}

void mostrarInformacionEstudiantes(vector<string> nombres,
                                   vector<vector<float>> notas) {
  for (int i = 0; i < nombres.size(); ++i) {
    cout << "Nombre: " << nombres[i] << "\n";
    cout << "Notas: ";
    for (float nota: notas[i]) {
        cout << fixed << setprecision(2) << nota << " ";
    }
    cout << "\nPromedio: " << calcularPromedioEstudiante(notas[i]) << "\n\n";
  }
}

void mostrarPromedioCurso(vector<vector<float>> notas){
    cout << "\nPromedio del Curso: " << calcularPromedioCurso(notas) << "\n";
}

int main() {
    vector<string> nombres = {"Juan Pacheco", "Maria Auxiliadora", "Pedro Aguilar", "Adriana Lucia"};

    vector<vector<float>> notas = {
        {4.0, 3.0, 3.5}, {4.0, 5.0, 3.5}, {3.0, 4.0, 2.0}, {3.0, 2.0, 2.0}
    };
    
    int opcion;
    do{ 
        cout << "\nMenu de Opciones:\n";
        cout << "1. Mostrar informacion de los estudiantes y su promedio\n";
        cout << "2. Mostrar el promedio del curso\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            
            case 1:
              mostrarInformacionEstudiantes(nombres, notas);
              break;
            case 2:
              mostrarPromedioCurso(notas);
              break;
            case 0:
              cout << "Gracias por utilizar este programa de informacion de notas.\n";
              break;
            default:
              cout << "Opcion no valida. Intente nuevamente.\n";
              break;
        }
    } while (opcion != 0);

    return 0;
}

