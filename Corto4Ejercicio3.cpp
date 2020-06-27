#include <iostream>

using namespace std;
float promedios(float array[][5], int m){
    int columna, fila;
    float promedio = 0;
    cout<<"Digite las notas"<<endl;
    //Se llena la matriz
    for (int fila = 0; fila < m; fila++)
    { 
        //se establece que el promedio es cero para que no acumule el promedio del estudiante anterior y genere errores
        promedio = 0;
        cout << "Las notas del estudiante " << fila << " son: "<<endl;
        for (float columna = 0; columna < 5; columna++)
        {
            cin>>array[fila][0];//Se pide las 5 notas 
            promedio += array[fila][0] * 0.2;//Se va acumulando el resultado de la multiplicacion por 0.2, la cual se va a ir sumando
        }
        if (promedio  >= 6.0) //Se evalua si el promedio es mayor que 6 para determinar si ha aprobado o no
        {
            cout<<"El promedio del estudiante "<<fila<<" es: "<< promedio<< " por lo cual a aprobado" <<endl;
        }else if ( promedio < 6)
        {
            cout<<"El promedio del estudiante "<<fila<<" es: "<< promedio<< " por lo cual a reprobado" <<endl;
        }
    }
}

int main(){

    int n;
    cout<<"CALCULADORA DE PROMEDIOS"<<endl;
    cout<<"Ingrese la cantidad de estudiantes: ";cin>>n;
    int a = 5;
    float array[n][5];
    promedios(array, n);
    return 0;
}