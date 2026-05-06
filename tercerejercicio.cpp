#include <iostream>

using namespace std;

int main (){

int mes; 
int seleccion;

cout<<"Seleccione su mes y dia de nacimiento (1-12): ";

cout<<"1: 20 de enero al 18 de febrero "<<endl;
cout<<"2: 19 de febrero al 20 de marzo"<<endl;
cout<<"3: 21 de marzo al 19 de abril"<<endl;
cout<<"4: 20 de abril al 20 de mayo"<<endl;
cout<<"5: 21 de mayo al 20 de junio"<<endl;          
cout<<"6: 21 de junio al 22 de julio"<<endl; 
cout<<"7: 23 de julio al 22 de agosto"<<endl;
cout<<"8: 23 de agosto al 22 de septiembre"<<endl;
cout<<"9: 23 de septiembre al 22 de octubre"<<endl;
cout<<"10: 23 de octubre al 21 de noviembre"<<endl;
cout<<"11: 22 de noviembre al 21 de diciembre"<<endl;

cin>>mes;
if (mes<1 || mes>12) {
        cout<<"Opcion no valida"<<endl;
        return 0;
    }
    mes;
    switch (mes)
    {
    case 1:;
        cout<<"Tu signo zodiacal es Acuario"<<endl;
        break;
    case 2:;
        cout<<"Tu signo zodiacal es Piscis"<<endl;
        break;
    case 3:;
        cout<<"Tu signo zodiacal es Aries"<<endl;
        break;
    case 4:;
        cout<<"Tu signo zodiacal es Tauro"<<endl;
        break;
    case 5:;
        cout<<"Tu signo zodiacal es Geminis"<<endl;
        break;
    case 6:;
        cout<<"Tu signo zodiacal es Cancer"<<endl;
        break;
    case 7:;
        cout<<"Tu signo zodiacal es Leo"<<endl;
        break;
    case 8:;
        cout<<"Tu signo zodiacal es Virgo"<<endl;
        break;
    case 9:;
        cout<<"Tu signo zodiacal es Libra"<<endl;
        break;
    case 10:;
        cout<<"Tu signo zodiacal es Escorpio"<<endl;
        break;
    case 11:;
        cout<<"Tu signo zodiacal es Sagitario"<<endl;
        break;
    case 12:;
        cout<<"Tu signo zodiacal es Capricornio"<<endl;
        break;
    default:
        cout<<"Opcion no valida"<<endl;
    }
return 0;
    }
