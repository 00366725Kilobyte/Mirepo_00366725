#include <iostream>
using namespace std;
int main() {
    int numeroSecreto = 13;  
    int intento;
    cout << "Adivina el número secreto!" << endl;
    do {
        cout << "Ingresa un numero: ";
        cin >> intento;
        if (intento < numeroSecreto) {
            cout << "El numero es muy bajo." << endl;
        }
        else if (intento > numeroSecreto) {
            cout << "El numero es muy alto." << endl;
        }
        else {
            cout << "¡Correcto! Adivinaste el numero secreto." << endl;
        }
    } while (intento != numeroSecreto);
    return 0;
}