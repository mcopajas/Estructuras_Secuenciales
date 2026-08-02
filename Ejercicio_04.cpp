#include <iostream>
using namespace std;

int main() {

    float pvp;
    float pf;
    float montoDesc;
    float descuento;

    cout << "Ingrese el precio de venta al publico (PVP): ";
    cin >> pvp;

    cout << "Ingrese el precio final pagado: ";
    cin >> pf;

    montoDesc = pvp - pf;

    descuento = (montoDesc * 100) / pvp;

    cout << "\n----------------------------------------" << endl;
    cout << "Monto del descuento       : " << montoDesc << endl;
    cout << "Porcentaje de descuento   : " << descuento << "%" << endl;

    return 0;
}