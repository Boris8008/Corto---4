#include <iostream>
using namespace std;

int funcionx(float estatura[])
{
    float promedio, suma; 
    int i;
    suma = 0;
    for (int i=1; i<=25; i++){
        suma += estatura[i];
    }
    promedio = suma / 25;
    cout << "El promedio de estaturas es de: "<< promedio << endl;
    return promedio;
}
void variable(float estatura[], float media, int *mayor, int *menor)
{
    for (int i=1; i<=25; i++) 
    {
        if (estatura[i] > media)
        {
            *mayor += 1;
        }
        else if (estatura[i] < media)
        {
            *menor += 1;
        }
    }
        cout << "Los valores mayores al promedio son: " << *mayor << endl;
        cout << "Los valores menores al promedio son: " << *menor << endl;
}

int main()
{
    float estatura[25], media;
    int mayor = 0, menor = 0;
    cout << "PROMEDIO DE ESTATURA DE UNA CLASE DE 25 ALUMNOS" << endl;
    for (int i=1; i<=25; i++)
    {
        cout << "Digite la estatura de los estudiantes ["<<i<<"]: " <<endl;
        cin >> estatura[i];
    }
    media = funcionx(estatura);
    variable(estatura, media, &mayor, &menor);
    return 0;
}