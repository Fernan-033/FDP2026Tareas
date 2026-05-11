#include <iostream>
using namespace std;
int main(){
    int intento,suma;
    int numero=0;
    suma=0;
    cout << "ingrese un numero ";
    cin >> intento;
    while (intento !=numero)
    {
        int i;
        i=intento;
        suma=i+suma;
        cout << "ingrese un numero ";
        cin >> intento;
    }
    cout <<suma;
return 0;
}