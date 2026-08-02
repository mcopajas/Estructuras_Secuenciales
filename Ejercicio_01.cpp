#include <iostream>
using namespace std;

int main() {

    float inv1, inv2, inv3;
    float total;
    float por1, por2, por3;

    cout << "Ingrese la inversion de la primera persona: ";
    cin >> inv1;

    cout << "Ingrese la inversion de la segunda persona: ";
    cin >> inv2;

    cout << "Ingrese la inversion de la tercera persona: ";
    cin >> inv3;

    total = inv1 + inv2 + inv3;

    por1 = (inv1 * 100) / total;
    por2 = (inv2 * 100) / total;
    por3 = (inv3 * 100) / total;

    cout << "\n------------------------------------\n";
    cout << "Porcentaje de la persona 1: " << por1 << "%" << endl;
    cout << "Porcentaje de la persona 2: " << por2 << "%" << endl;
    cout << "Porcentaje de la persona 3: " << por3 << "%" << endl;

    return 0;
}