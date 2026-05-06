#include <iostream>
using namespace std;

int main(){

    float centimetros, metros, kilometros;
    float a;
    float b;
    float c;
    centimetros= a/100;
    metros= b/3.28;
    kilometros= c*0.62;

    cout<<"Bienvenido ala calculadora convertidor de unidades"<<endl;


    cout<<"Seleccione una opcion: "<<endl;
    cout<<"1. Pasar de Centimetros a pulgadas"<<endl;
    cout<<"2. Pasar de metros a pies"<<endl;
    cout<<"3. Pasar de Kilometros a millas"<<endl;
    
    int opciones;
    cin>>opciones;
    switch (opciones) 
    {case 1:
      if (a==1) cout<<"Ingrese la cantidad de centimetros: "<<endl;
        cin>>a;
        cout<<"La cantidad de pulgadas es: "<<a/2.54<<endl;
        break;

    case 2:
       if(b==2) cout<<"Ingrese la cantidad de metros: "<<endl;
        cin>>b;
        cout<<"La cantidad de pies es:"<<b/3.28<<endl;
        break;
       
       
     case 3:
      if(c==3)  cout<<"Ingrese la cantidad de kilometros:"<<endl;
        cin>>c;
        cout<<"La cantidad de millas es: "<<c*0.62<<endl;
        break;
    }


    return 0;   
}
