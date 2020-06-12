#include <iostream>

using namespace std;

int main(){

    int Salvador, Guatemala, Honduras, Espana;
    float total, cantidad;
    string opcion;

    cout<<"Calculadora de IVA"<<endl;
    cout<<"Se le pide que ingrese su pais para poder calcular cuanto debe de pagar de IVA"<<endl;
    cout<<"El Salvador"<<endl;
    cout<<"Guatemala"<<endl;
    cout<<"Honduras"<<endl;
    cout<<"Espana"<<endl;
    cout<<"Escriba su pais: "<<endl;
    getline(cin,opcion);
    cout<<"Ingrese su cantidad de dinero: "<<endl;
    cin>>cantidad; 

    if (opcion == "El Salvador")
    {
        total = cantidad * 0.13;
        cout<<"Usted debe pagar "<<total<<" dolares"<<endl;
    }else if (opcion == "Guatemala")
    {
        total = cantidad * 0.09;
        cout<<"Usted debe pagar "<<total<<" quetzales"<<endl;
    }else if (opcion == "Honduras")
    {
        total = cantidad * 0.15;
        cout<<"Usted debe pagar "<<total<<" lempiras"<<endl;
    }else{

        total = cantidad * 0.20;
        cout<<"Usted debe pagar "<<total<<" euros"<<endl;
    }

    return 0;}