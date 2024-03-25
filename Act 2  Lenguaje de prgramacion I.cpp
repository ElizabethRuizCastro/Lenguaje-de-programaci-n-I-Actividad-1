
#include <iostream>
using namespace std;
int main()
{
    float numero1, numero2, suma, resta, multiplicacion, division;
    cout << "Escribe el primer numero : ";
    cin >> numero1;

    cout << "Escribe el segundo numero :";
    cin >> numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2; 

    cout << "La suma es: " << suma<< endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicación es: " << multiplicacion << endl;
    cout << "La division es: " << division << endl;

return 0;
}
