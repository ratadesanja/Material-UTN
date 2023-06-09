/*
 
   Escriba un programa que reciba tres números por el teclado e imprima la suma, el promedio,
   el producto, el mayor y el menor de esos números. Escriba un adecuado dialogo en pantalla.

*/

#include <iostream>

using namespace std;

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;

    cout << "Ingrese el valor de 3 números." << endl << "Número 1: ";
    cin >> a;
    cout << "Número 2: ";
    cin >> b;
    cout << "Número 3: ";
    cin >> c;

    cout << "Suma: " << a + b + c << endl << "Promedio: " << (a+b+c)/3 << endl << "Producto: " << a*b*c << endl;

    float lista[3];

    lista[0] = a;
    lista[1] = b;
    lista[2] = c;

    float min = a;
    float max = a;
    for (int i = 0; i < 3; i++)
    {
        if(min > lista[i])
            min = lista[i];

        if(max < lista[i])
            max = lista[i];
    }

    cout << "Mayor: " << max << endl << "Menor: " << min << endl;
    return 0;
}
