//1. Escribe la siguiente expresión como expresión en C++:

#include<iostream>
using namespace std;

int main(){
    float a,b, resultado = 0;

    cout<<"Digite el valor de a: ";
    cin>>a;
    cout<<"Digite el valor de b: ";
    cin>>b;

    resultado = (a/b) + 1; //Los parentecis se usan para que se le de mas valor a la variable

    cout.precision(3); //Se utiliza para darle un valor mas preciso a un problema
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}