#include <iostream>
using namespace std;

int main() {
    int contador ;
    cout << "Ingrese un numero para iniciar cuenta regresiva: ";
    cin >> contador ;
    //el will smith
      while (contador >= 0 ) {
        cout << "Contador en while: " << contador << endl;
        contador--; // Disminuye el contador 
    }

    return 0;


}