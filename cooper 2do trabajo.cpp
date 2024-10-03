#include <iostream>
using namespace std;

int main() {
    int MAT;
    float PRO, CAL1, CAL2, CAL3, CAL4, CAL5;

    // Mensaje de bienvenida
    cout << "Hola! Este programa calcula el promedio de 5 calificaciones" << endl;

    // Se pide la matrícula del alumno
    cout << "Por favor ingrese la matrícula del alumno: " << endl;
    cin >> MAT;

    // Se piden las calificaciones
    cout << "Por favor ingrese la primera calificación: " << endl;
    cin >> CAL1;
    
    cout << "Por favor ingrese la segunda calificación: " << endl;
    cin >> CAL2;
    
    cout << "Por favor ingrese la tercera calificación: " << endl;
    cin >> CAL3;
    
    cout << "Por favor ingrese la cuarta calificación: " << endl;
    cin >> CAL4;
    
    cout << "Por favor ingrese la quinta calificación: " << endl;
    cin >> CAL5;

    // Se calcula el promedio
    PRO = (CAL1 + CAL2 + CAL3 + CAL4 + CAL5) / 5.0;

    // Se muestra el resultado
    cout << "El promedio del alumno con matrícula " << MAT << " es " << PRO << endl;

    return 0;
}
