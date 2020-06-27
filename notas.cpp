#include <iostream>

using namespace std;

void Matriz();
void Notas();
float n[25][5];

int ALUMNOS;

void Matriz()
{
    cout << "Ingrese el numero de Alumnos: ";
    cin >> ALUMNOS;
    cout << endl;
    for (int i = 1; i <= ALUMNOS; i++)
    {
        cout << "Alumno " << i << endl;
        for (int j = 1; j <=5; j++)
        {
            cout << "Ingrese la nota " << j <<": ";
            cin >> n[i][j];
        }
        cout << endl;
    }
    Notas();
}

void Notas()
{
    float TotalNotas = 0, Promedio = 0;
    for (int i = 1; i <= ALUMNOS; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            TotalNotas = TotalNotas + n[i][j];
        }
        Promedio = (TotalNotas * 0.20);
        if (Promedio >= 6)
        {
            cout << "Alumno " << i << " Aprobaste con un promedio de: " << Promedio << endl;
            TotalNotas = 0, Promedio = 0;
        }
        else
        {
            cout << "Alumno " << i << "Haz reprobado con un promedio de: " << Promedio << endl;
            TotalNotas = 0, Promedio = 0;
        }  
    }
}
int main()
{
    Matriz();
    return 0;
}