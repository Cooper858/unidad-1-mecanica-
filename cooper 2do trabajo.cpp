#include <iostream>
using namespace std;

int main() {
    int MAT;
    float PRO, CAL1, CAL2, CAL3, CAL4, CAL5;

    // Mensaje de bienvenida
    cout << "Hola! Este programa calcula el promedio de 5 calificaciones" << endl;

    // Se pide la matr�cula del alumno
    cout << "Por favor ingrese la matr�cula del alumno: " << endl;
    cin >> MAT;

    // Se piden las calificaciones
    cout << "Por favor ingrese la primera calificaci�n: " << endl;
    cin >> CAL1;
    
    cout << "Por favor ingrese la segunda calificaci�n: " << endl;
    cin >> CAL2;
    
    cout << "Por favor ingrese la tercera calificaci�n: " << endl;
    cin >> CAL3;
    
    cout << "Por favor ingrese la cuarta calificaci�n: " << endl;
    cin >> CAL4;
    
    cout << "Por favor ingrese la quinta calificaci�n: " << endl;
    cin >> CAL5;

    // Se calcula el promedio
    PRO = (CAL1 + CAL2 + CAL3 + CAL4 + CAL5) / 5.0;

    // Se muestra el resultado
    cout << "El promedio del alumno con matr�cula " << MAT << " es " << PRO << endl;

    return 0;
}
