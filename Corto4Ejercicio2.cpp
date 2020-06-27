#include <iostream>
using namespace std;
float promedio(float estatura[]){
    float promedio, suma = 0;
    for (int i = 0; i < 25; i++)//Se esta acumulando la suma de las estaturas para sacar su promedio
    {
        suma += estatura[i];
    }
    promedio = suma/25;
return promedio; 
}
int conteo(float estaturas[]){
   float media = promedio(estaturas);//Se crea 2 contadores una para contar las estaturas por arriba de la media y la otra las que estan por debajo
   int contador = 0;
   int contador2 = 0; 
    for (int i = 0; i < 25; i++)
   {
       if (estaturas[i] > media)
       {
           contador++; //Irá acumulando las estaturas que cumplan con esta característica
       }
        if (estaturas[i] < media)
       {
           contador2++;
       }
       
   }
   cout<<"La cantidad de estaturas que estan arriba de la media son: "<<contador<<endl;
   cout<<"La cantidad de estaturas que estan por debajo de la media son: "<<contador2;
}
int main(){
    float estaturas[25];
    cout<<"CALCULAR EL PROMEDIO DE LAS ESTATURAS DE 25 ALUMNOS"<<endl;
    //Llenando el array de estaturas, solicitando las requeridas
    for (int i = 0; i < 25; i++)
    {
        cout<<"Ingrese la estatura: ";cin>>estaturas[i];
    }
cout<<"El promedio de estaturas es: "<<promedio(estaturas)<<endl;//Se mandan todas las estaturas a la función promedio
    conteo(estaturas);
    return 0;
    }