#include <iostream>

using namespace std;

int main() {

    int a;
    int b;

    cout << "Hola, introduci dos variables"<< endl;

    cin >> a;
    cin >> b;

    int suma = a+b;
    int resta = a-b;
    int division = a/b;
    int modulo = a%b;

    char caract = (char) (a+b);

    cout << "La suma es: " << suma << ", la diferencia es: "<< resta << endl;
    cout << "La division es: "<< division <<", el resto es: "<< modulo << endl;

    cout<<"El caracter es: " << caract <<endl;

    return 0;
}