#include <iostream>
using namespace std;
int main()
{
    float nota1, nota2, nota3, nota4, nota5, nota6, promedio = 0;
    string nombre;
    cout << "Ingrese su nombre ";
    cin >> nombre;
    cout << "Ingrese la nota del corto 1 " << "\n";
    cin >> nota1;
    cout << "Ingrese la nota del corto 2 " << "\n";
    cin >> nota2;
    cout << "Ingrese la nota del parcial 1 " << "\n";
    cin >> nota3;
    cout << "Ingrese la nota del parcial 2 " << "\n";
    cin >> nota4;
    cout << "Ingrese la nota del laboratorio " << "\n";
    cin >> nota5;
    cout << "Ingrese la nota del proyecto " << "\n";
    cin >> nota6;
    nota1 = nota1 * 1.0;
    nota2 = nota2 * 1.0;
    nota3 = nota3 * 1.5;
    nota4 = nota4 * 2.0;
    nota5 = nota5 * 2.0;
    nota6 = nota6 * 2.5;
    promedio = nota1 + nota2 + nota3 + nota4 + nota5 + nota6;
    
    if (promedio >= 6.0)
    {
        cout << nombre<<"\n";
        cout << "Su promedio de notas es " << promedio<<"\n";
        cout << "Felicidades a aprobado ";
    }
    else
    {
        cout << "Su promedio es de" << promedio<<"\n";
        cout << "Lamentablemente usted no a aprobado";

    }
}