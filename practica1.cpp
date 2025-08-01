#include <iostream>

using namespace std;

int main()
{
    int ladoA;
    int ladoB;
    int ladoC;

    cout << "Ingrese lado A: ";
    cin >> ladoA;

    cout << "Ingrese lado B: ";
    cin >> ladoB;

    cout << "Ingrese lado C: ";
    cin >> ladoC;

        if (ladoA == ladoB && ladoB == ladoC) {
            cout << "EL TRIANGULO ES EQUILATERO" << endl;
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            cout << "EL TRIANGULO ES ISOSCELES" << endl;
        } else {
            cout << "EL TRIANGULO ES ESCALENO" << endl;
        }
    
    return 0;
}