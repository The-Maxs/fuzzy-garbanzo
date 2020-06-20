#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream miArchivoAEscribir;
    miArchivoAEscribir.open("NuevoArchivo.txt");
    miArchivoAEscribir<< "Escribiendo a un  archivo!"<<endl;
    miArchivoAEscribir.close();

    ifstream miArchivoALeer;
    miArchivoALeer.open("NuevoArchivo.txt");
    string textoArchivo;
    miArchivoALeer >> textoArchivo;
    cout << textoArchivo<<endl;
    miArchivoALeer.close();

    return 0;
}