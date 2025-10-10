#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << " del 1 al 20:" << endl;

    for (int i = 1; i <= 20; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}