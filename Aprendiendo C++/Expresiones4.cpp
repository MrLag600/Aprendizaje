//Ejercicio 4 de curso de C++

#include<iostream>
using namespace std;

int main(){
    float a,b,c,d, resultado = 0;

    cout<<"Digita el valor de a: ";
    cin>>a;    
    cout<<"Digita el valor de b: ";
    cin>>b;
    cout<<"Digita el valor de c: ";
    cin>>c;
    cout<<"Digita el valor de d: ";
    cin>>d;

    resultado=(a + b/(c-d));

    cout.precision(3);
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}