#include <iostream>
using namespace std;
int main()
{
    float angulo = 0;
    cout << "Digite un angulo "<<"\n";
    cin >> angulo;
    if (angulo < 90)
    {
        cout << "El angulo ingresado es agudo ";
    }
    else if (angulo == 90)
    {
        cout << "El angulo ingresado es recto ";
    }
    else
    {
        cout << "El angulo ingresado es obtuso ";
    }
}