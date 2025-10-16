#include <iostream>
#include <math.h>
#define pi 3.1416
using namespace std;

int main()//funcion principal
{//inicio
    cout<<"CALCULADORA DE  AREA Y VOLUMEN DE CASQUETE ESFERICO"<<endl;
    cout<<endl;
    float R,h,A,V;
    cout<<"Valor de R= ";
    cin>>R;
    cout<<"Valor de h= ";
    cin>>h;
    //en fracciones establecer con decimal (1.0/3.0)
    A=(2*pi*R)*h;
    V=((1.0/3.0)*pi*pow(h,2))*((R*3)-h);
    //endl=comando para salto de linea
    cout<<"El área del casquete esferico es  "<<A<<endl;
    cout<<"El volumen del casquete esferico es  "<<V;

    return 0;

}//fin
