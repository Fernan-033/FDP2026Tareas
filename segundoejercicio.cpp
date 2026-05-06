#include <iostream>
using namespace std;

int main(){

    int edad, opcion;
    

    cout<<"Ingrese su edad porfavor: ";
    cout<<"1:Tengo entre 0 a 8 años"<<endl;
    cout<<"2:Tengo entre 9 a 13años"<<endl;    
    cout<<"3:Tengo entre 14 a 18 años"<<endl;
    cout<<"4:Tengo 18 años o mas"<<endl;
    cin>>opcion;
    if (opcion<1 || opcion>4) {
        cout<<"Opcion no valida"<<endl;
        return 0;
    }
    opcion;
    switch (opcion)
    {
   case 1:;
        cout<<"Te recomiendo la pelicula Rey leon"<<endl;
        break;
       
    case 2:;
        cout<<"Te recomiendo la pelicula Avatar"<<endl;
        break;
    case 3:;
        cout<<"Te recomiendo la pelicula El padrino"<<endl;
        break;
    case 4: ;
        cout<<"Te recomiendo la pelicula Rapidos y Furiosos 9"<<endl;
        break;

    default:
        cout<<"Edad no valida"<<endl;

    }


    return 0;
}