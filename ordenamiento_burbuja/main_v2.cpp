#include <iostream>
using namespace std;

// Función para ordenar el arreglo con burbuja
void burbuja(int numeros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temporal = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temporal;
            }
        }
    }
}

int main() {
    // Crear el arreglo
    int numeros[] = {8, 3, 5, 1, 9, 2};
    int n = 6;

    // Mostrar el arreglo original
    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }

    // Ordenar el arreglo
    burbuja(numeros, n);

    // Mostrar el arreglo ordenado
    cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}