#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int A, B;
    float resultado;

    // Entrada de datos
    cout << "Introduce el valor de A: ";
    cin >> A;
    cout << "Introduce el valor de B: ";
    cin >> B;

    // Cálculo de la expresión (A + B)^2 / 3
    resultado = ((A + B) * (A + B)) / 3.0;

    // Salida del resultado
    cout << "El resultado de la expresion es: " << resultado << endl;

    return 0;
}
