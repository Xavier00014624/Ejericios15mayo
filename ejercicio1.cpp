#include <iostream>
using namespace std;
int main()
{
    float angulo1 = 0, angulo2 = 0, angulo3 = 0;
    int suma = 0, total=0;
    cout << "Bienvenido a la calculadora de angulos" << '\n';
    cout << "Escriba el angulo 1" << '\n';
    cin >> angulo1;
    cout << "Escriba el angulo 2" << '\n';
    cin >> angulo2;
    suma = angulo1 + angulo2;
    angulo3 = 180 - suma;
    total = angulo1+angulo2+angulo3;
    cout << "el angulo numero 3 es " << angulo3<<"\n";
    cout << "La suma de los 3 angulos da " << total;
    return 0;
}