#include <iostream>
using namespace std;
int main(){
int limite,a,b,siguiente;
limite=30;
a=0;
b=1;
siguiente=0;
cout<<"sucesion de fibonazi hasta: "<<limite<<endl;
cout<<a<<endl;
while(b<30)
{
   cout<<b<<endl;
   siguiente=a+b;
   a=b;
   b=siguiente;
}

return 0;

}






