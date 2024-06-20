#include <iostream>
using namespace std;
class Determinales
{
public:
    double Determinar(double Datos[10][10], int Matriz);
};
double Determinales::Determinar(double Datos[10][10], int Matriz)
{
    int Signo = 0;
    double Determinante = 0;
    double SubMatriz[10][10]{ 0 };
    if (Matriz == 2)
    {
        Determinante = ((Datos[1][1] * Datos[2][2]) - (Datos[1][2] * Datos[2][1]));
    }
    else
    {
        for (int C = 1; C <= Matriz; C++)
        {
            if ((C % 2) == 0)
            {
                Signo = -1;
            }
            else
            {
                Signo = 1;
            }
            for (int SF = 2; SF <= Matriz; SF++)
            {
                for (int SC = 1; SC <= Matriz; SC++)
                {
                    if (SC != C)
                    {
                        int i;
                        if (SC <= C)
                        {
                            i = SC;
                        }
                        else
                        {
                            i = SC - 1;
                        }
                        SubMatriz[SF - 1][i] = Datos[SF][SC];
                    }
                }
            }
            Determinante += Signo * Datos[1][C] * Determinales::Determinar(SubMatriz, (Matriz - 1));
        }
    }
    return Determinante;
};
int main()
{
    double Datos[10][10]{ 0 };
    char Opcion{ 0 };
    while (Opcion != 'E')
    {
        int Matriz;
        cout << "Cuantos valores tiene tu matriz cuadrada (2 - 10)?:" << endl;
        cin >> Matriz;
        Determinales Mat;
        if (Matriz < 2 || Matriz > 10)
        {
            cout << "Matriz no permitida" << endl;
        }
        else
        {
            while (Opcion != 'S')
            {
                for (int F = 1; F <= Matriz; F++)
                {
                    for (int C = 1; C <= Matriz; C++)
                    {
                        cout << "Dame el valor del numero en la fila " << F << " y columna  " << C << endl;
                        cin >> Datos[F][C];
                    }
                }
                for (int F = 1; F <= Matriz; F++)
                {
                    for (int C = 1; C <= Matriz; C++)
                    {
                        cout << "\t" << Datos[F][C];
                    }
                    cout << "\n";
                }
                cout << "Tu matriz es correcta? \n [S] Correcta \n [R] Rellenar de nuevo" << endl;
                cin >> Opcion;
            }
            double Determinante = Mat.Determinar(Datos, Matriz);
            cout << "La determiante de la matriz es: " << Determinante << endl;
            cout << "Desea hacer una nueva matriz: \n [R] Rellenar de nuevo\n [E] Salir" << endl;
            cin >> Opcion;
        }
    }
    return 0;
}