/*Ejercicio 6: Escriba un programa que lea la nota final
de 4 alumnos y calcule la nota final media de los cuatro alumnos*/

#include<iostream>
using namespace std;

int main(){
    int nota1,nota2,nota3,nota4,final;

    cout<<"Digame la nota final del alumno N1: "; cin>>nota1;
    cout<<"Digame la nota final del alumno N2: "; cin>>nota2;
    cout<<"Digame la nota final del alumno N3: "; cin>>nota3;
    cout<<"Digame la nota final del alumno N4: "; cin>>nota4;

    final = (nota1+nota2+nota3+nota4);

    cout<<"\nLa nota final media de los 4 alumnos es: "<<final<<endl;

    return 0;
}