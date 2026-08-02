#include <iostream>
using namespace std;

int main() {

    float par1, par2;
    float exFinal;
    float trabFinal;
    float promPar;
    float notaFinal;

    cout << "Ingrese la primera calificacion parcial: ";
    cin >> par1;

    cout << "Ingrese la segunda calificacion parcial: ";
    cin >> par2;

    cout << "Ingrese la calificacion del examen final: ";
    cin >> exFinal;

    cout << "Ingrese la calificacion del trabajo final: ";
    cin >> trabFinal;

    promPar = (par1 + par2) / 2;

    notaFinal = (promPar * 0.55) +
                (exFinal * 0.30) +
                (trabFinal * 0.15);

    cout << "\n-------------------------------------" << endl;
    cout << "Promedio de parciales : " << promPar << endl;
    cout << "Calificacion final    : " << notaFinal << endl;

    return 0;
}