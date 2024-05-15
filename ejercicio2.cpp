#include <iostream>
using namespace std;
int main()
{
    int edad = 0;
    cout << "Digite su edad "<<"\n";
    cin >> edad;
    if (edad >= 18)
    {
        cout << "Usted es mayor de edad";
    }
    else
    {
        cout << "Usted es menor de edad";
    }

    return 0;
}