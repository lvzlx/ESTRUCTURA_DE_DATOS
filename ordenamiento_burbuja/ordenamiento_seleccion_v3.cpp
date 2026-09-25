#include <iostream>
#include <sstream>
#include <string>

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
    int comparaciones = 0;
    int intercambios = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int posicionMinimo = i;

        for (int j = i + 1; j < n; j++)
        {
            comparaciones++;

            if (numeros[j] < numeros[posicionMinimo])
            {
                posicionMinimo = j;
            }
        }

        if (posicionMinimo != i)
        {
            int temporal = numeros[i];
            numeros[i] = numeros[posicionMinimo];
            numeros[posicionMinimo] = temporal;

            intercambios++;
        }

        cout << "Pasada " << i + 1 << ":" << endl;
        mostrarArreglo(numeros, n);
        cout << endl;
    }

    cout << "Comparaciones hechas: " << comparaciones << endl;
    cout << "Intercambios hechos: " << intercambios << endl;
}

int main()
{
    int numeros[100];
    int n = 0;

    string linea;

    cout << "Introduce la lista de numeros:" << endl;
    getline(cin, linea);

    // Cambiar comas y corchetes por espacios
    for (int i = 0; i < linea.length(); i++)
    {
        if (linea[i] == ',' || linea[i] == '[' || linea[i] == ']')
        {
            linea[i] = ' ';
        }
    }

    stringstream entrada(linea);

    while (entrada >> numeros[n] && n < 100)
    {
        n++;
    }

    cout << endl;

    cout << "Lista original:" << endl;
    mostrarArreglo(numeros, n);

    cout << endl;

    seleccion(numeros, n);

    return 0;
}