#include <iostream>
using namespace std;

int main(){

int estrellas;
int desempeno;

cout<< "De 1 a 5 estrellas cual fue tu desempeño en el videojuego: "<<endl;
cout<<"1Estrella :"<<endl;
cout<<"2 Estrellas:"<<endl;
cout<<"3 Estrellas: "<<endl;
cout<<"4 Estrellas: "<<endl;
cout<<"5 Estrellas: "<<endl;


cin>>desempeno;
if (desempeno<1 || desempeno>5) {
        cout<<"Esta Opcion no es valida"<<endl;
        return 0;
    }

switch (desempeno)
{
    case 1:;
        cout<<"Pesimo desempeño "<<endl;
        break;
    case 2:;
        cout<<"Mal trabajo "<<endl;
        break;
    case 3:;
        cout<<"Trabajo medio "<<endl;
        break;
    case 4:;
        cout<<"Muy bien trabajo "<<endl;
        break;
    case 5:;
        cout<<"Exelente trabajo "<<endl;
        break;

}
    return 0;
}
