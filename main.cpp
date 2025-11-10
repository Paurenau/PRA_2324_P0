#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

int main() {
    // Crear un brazo robótico en la posición (0, 0, 0)
    BrazoRobotico brazo(0.0, 0.0, 0.0);

    cout << "Posición inicial del brazo: "
         << "(" << brazo.getx() << ", " << brazo.gety() << ", " << brazo.getz() << ")" << endl;

    // Mover el brazo a otra posición
    brazo.mover(5.5, 3.2, 7.0);
    cout << "Después de moverlo: "
         << "(" << brazo.getx() << ", " << brazo.gety() << ", " << brazo.getz() << ")" << endl;

    // El brazo intenta coger algo
    brazo.coger();
    cout << "El brazo ha cogido un objeto." << endl;

    // Soltar el objeto
    brazo.soltar();
    cout << "El brazo ha soltado el objeto." << endl;

    // Moverlo otra vez
    brazo.mover(1.0, 2.0, 3.0);
    cout << "Posición final del brazo: "
         << "(" << brazo.getx() << ", " << brazo.gety() << ", " << brazo.getz() << ")" << endl;

    return 0;
}
