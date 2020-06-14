#include <iostream>
#include <string>
using namespace std;
int bisiesto(int fecha){

    int m, n, x;
   //A las siguientes 2 variables (m, n) se les asigna el residuo de la división entera del año ingresado entre 400, 4 y 100.
    m = fecha % 400;
    n = fecha % 4 && fecha % 100 != 0;
    x = (m == n);//A esta variable se le asigna el resultado de comparar las dos variables anteriores, verificando si son iguales.

    return n;
}
int main(){

    int year, dato;

    cout<<"YEAR BISIESTO "<<endl;
    cout<<"Para poder determinar si un es bisiesto o no, por favor ingrese el año "<<endl;
    cin>>year;
    cout<<endl;
    //A la variable dato se le asigna el resultado que retorna la función bisiesto.
    dato = bisiesto(year);

    //Si el valor asignado a dato es 0, será bisiesto, pero si es uno, significa que no lo es.
    if (dato == 0)
    {
        cout<<"Es bisiesto "<<endl;
    }else
    {
        cout<<"No es bisiesto "<<endl;
    }
    return 0;
}