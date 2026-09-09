// programa para calcular la serie de Fibonacci usando recursividad
#include <iostream>
using namespace std;

// Funcion recursiva para calcular Fibonacci
long long fibonacci(int n) {

    // Casos base
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    // Caso recursivo
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int n;

    cout << "hasta que termino de fibonacci deseas calcular? ";
    cin >> n;

    if (n < 0) {
        cout << "el numero debe ser mayor o igual a 0." << endl;
        return 0;
    }

    for (int i = 0; i <= n; i++) {
        cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }

    return 0;
}