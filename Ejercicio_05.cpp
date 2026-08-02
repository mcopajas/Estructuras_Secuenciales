#include <iostream>
using namespace std;

int main() {

    int monto;
    int b200, b100, b50, b20, b10;
    int m5, m2, m1;
    int resto;

    cout << "Ingrese el monto en soles: ";
    cin >> monto;

    b200 = monto / 200;
    resto = monto % 200;

    b100 = resto / 100;
    resto = resto % 100;

    b50 = resto / 50;
    resto = resto % 50;

    b20 = resto / 20;
    resto = resto % 20;

    b10 = resto / 10;
    resto = resto % 10;

    m5 = resto / 5;
    resto = resto % 5;

    m2 = resto / 2;
    m1 = resto % 2;

    cout << "\n-------------------------------------" << endl;
    cout << "Billetes de 200 : " << b200 << endl;
    cout << "Billetes de 100 : " << b100 << endl;
    cout << "Billetes de 50  : " << b50 << endl;
    cout << "Billetes de 20  : " << b20 << endl;
    cout << "Billetes de 10  : " << b10 << endl;
    cout << "Monedas de 5    : " << m5 << endl;
    cout << "Monedas de 2    : " << m2 << endl;
    cout << "Monedas de 1    : " << m1 << endl;

    return 0;
}