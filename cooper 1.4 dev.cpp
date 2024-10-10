#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float GALONES, TOTAL;
    const float GALON = 3.785, PRECIO_LITRO = 8.20;

    // Entrada de datos
    cout << "Escribe la cantidad de galones comprados: ";
    cin >> GALONES;

    // Cálculo
    TOTAL = GALONES * GALON * PRECIO_LITRO;

    // Se imprimen los resultados
    cout << "Hay que cobrar al cliente por " << GALONES << " galones, debe pagar " << TOTAL << " pesos." << endl;

    return 0;
}
