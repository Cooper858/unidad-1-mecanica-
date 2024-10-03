#include <iostream>
using namespace std;

int main() {
    int NUM, CUA, CUB;

    // Mensaje de bienvenida
    cout << "Hola! Este programa 1.9 Calcula el cuadrado y el cubo de un numero entero positivo" << "\n";

    // Se pide el valor de NUM
    cout << "Por favor ingrese el valor de NUMERO: " << "\n";
    
    // Se asigna el valor a NUM
    cin >> NUM;

    // Resolviendo la fórmula del problema
    CUA = NUM * NUM;
    CUB = NUM * CUA;

    // Enviamos el resultado de CUA y CUB a la pantalla
    cout << "El cuadrado de " << NUM << " es: " << CUA << " y el cubo es: " << CUB << endl;

    return 0;
}
