#include <iostream>
using namespace std;

int main() {

    int seg;
    int sem, dia, hor, min, segRes;
    int resto;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> seg;

    sem = seg / 604800;
    resto = seg % 604800;

    dia = resto / 86400;
    resto = resto % 86400;

    hor = resto / 3600;
    resto = resto % 3600;

    min = resto / 60;
    segRes = resto % 60;

    cout << "\n----------------------------------" << endl;
    cout << "Semanas : " << sem << endl;
    cout << "Dias    : " << dia << endl;
    cout << "Horas   : " << hor << endl;
    cout << "Minutos : " << min << endl;
    cout << "Segundos: " << segRes << endl;

    return 0;
}