//Respuesta al ejercicio matematico a+b/c+d

#include<iostream>
using namespace std;

int main(){
    float a,b,c,d, resultado=0, resultado2=0, division;

    cout<<"Dime el valor de a: "; cin>>a;
    cout<<"Dime el valor de b: "; cin>>b;
    cout<<"Dime el valor de c: "; cin>>c;
    cout<<"Dime el valor de d: "; cin>>d;

    resultado = (a+b);
    resultado2 = (c+d);
    division= (resultado/resultado2);

    cout<<"\nEl resultado de a + b es: "<<resultado<<endl;
    cout<<"El resultado de c + d es: "<<resultado2<<endl;
    cout.precision(3); //darle precision de caracteres a los resultados númericos
    cout<<"Y la division entre los resultados de (a + b), (c + d) es: "<<division<<endl;

    return 0;
}