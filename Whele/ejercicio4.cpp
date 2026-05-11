//Crea un menú que se repita hasta que el usuario elija la opción de salir.

#include <iostream>
using namespace std;
int main(){
    int condicion;
    int opcion;
    int salir=4;


cout<<"Eligue una opcion: "<<endl;
cout<<"1. Abrir Facebook"<<endl;
cout<<"2.Llamar a Felipe"<<endl;
cout<<"3.Abrir un videojuego"<<endl;
cout<<"4.Salir al menu principal"<<endl;
cin>>opcion;

while (opcion !=4)
{
 cout<<"Eliga otra opcion"<<endl;
 cin>>opcion;
     /* code */
}

cout<<"Haz salido del menu";


    return 0;
}