#include <iostream>
using namespace std;
int main()
{
    int N;
    int suma = 0;
    int contador = 1;
    cout << "Ingresa un numero Limite (N)" << endl;
    cin >> N;
    while (N >= contador )
    {
        if (contador % 2 == 0){
            suma += contador;
            
        }
        contador++;
    }
    
        cout << " La suma de los numeros pares hasta N es:" << suma<< endl;

    
    return 0;
}