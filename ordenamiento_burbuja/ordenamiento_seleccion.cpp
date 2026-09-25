#include <iostream>
using namespace std;

void mostrarArreglo(int numeros[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

void seleccion(int numeros[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int posicionMinimo = i;

        for (int j = i + 1; j < n; j++)
        {
            if (numeros[j] < numeros[posicionMinimo])
            {
                posicionMinimo = j;
            }
        }

        int temporal = numeros[i];
        numeros[i] = numeros[posicionMinimo];
        numeros[posicionMinimo] = temporal;

        cout << "Pasada " << i + 1 << ":" << endl;
        mostrarArreglo(numeros, n);
    }
}

int main()
{
    int numeros[] = {32, 12, 3, 8, 45, 20, 64};
    int n = 7;

    seleccion(numeros, n);

    return 0;
}