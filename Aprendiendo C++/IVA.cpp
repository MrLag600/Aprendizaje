#include<iostream>
using namespace std;

int main(){
    float producto=0, IVA=0.12, sumaP;

    cout<<"Ingresa el precio de tu producto: ";
    cin>>producto;

    sumaP = producto * IVA;

    cout<<"\nEl precio del producto es: "<<producto<<endl;
    cout<<"El precio del IVA es: "<<IVA<<endl;
    cout.precision(3);
    cout<<"El precio total de tu producto es: "<<sumaP<<endl;


    return 0;
}