#include <iostream>
using namespace std;
//Se crea una función que  pedirá el numero y que calculara los intentos restantes bajo condiciones
int magico(int){
    int numero = 27;//Este es el numero secreto
    int n;
    int contador = 5;/*El contador será la cantidad de intentos que tiene el usuario, se le asigna un valor de
    5 porque ira de manera decresiente*/
    int stop = 0; /* Esta variable simboliza la tecla a presionar para que el usuario deje de jugar,
    en caso que aun tenga intentos restantes */

    /* Este bucle por condición es usado para que mientras no se realicen las condiciones del while, se mantenga pidiendo el numero 5 veces */
    do
    {
        cout<<endl<<" Ingrese un numero"<<endl;
        cin>>n; 
        contador --; /*El contador tiene un valor inicial de 5, pero después de ingresar el primer número, este ira en disminución hasta llegar
        a 0, lo que equivale a 0 intentos*/
        if (n != 0 && n > numero)/* El if es utilizado para condicionar de que el numero introducido sea diferente de cero, ya que si introduce
        cero significaria que ya no quiere jugar, y para verificar si este numero es mayor que el numero secreto, 27 */
        {
            cout<<"El numero ingresado es mayor, digite un numero menor"<<endl;//En caso de cumplirse ambas condiciones se lanzará este mensaje
            cout<<"Le quedan "<<contador<<" intentos";//Aquí se muestra el numero de intentos que le quedan al usuario
        }else if (n != 0 && n < numero)//Este if cumple la misma función, con la diferencia de que verificará si el numero es menor que el 27
        {
            cout<<"El numero ingresado es menor, digite un numero mayor"<<endl;//En caso de cumplirse ambas condiciones se mostrara este mensaje
            cout<<"Le quedan "<<contador<<" intentos";
        }else if (n == numero)/* Esta condicion unicamente se aplicará si el numero introducido es igual a 27, el número secreto */
        {
            cout<<"El numero es correcto"<<endl;//Al cumplirse la condución saldrá este mensaje y el programa parara, aunque falten intentos
        }
    } while (n != numero && n != stop && contador != 0);/* En este while se encuentran todas las condiciones que se necesitan para que se 
    ejecute lo que se encuentra dentro del do, las cuales son: de que el numero ingresado debe ser diferente de 27, el numero secreto, que
    ese mismo numero sea diferente de cero y que el contador debe de ser diferente de cero. En caso de que alguna de esas condiciones no se
    cumpla se dejara de ejecutar el bucle  */
}
int main(){
    int n;
    int stop = 0;/* Esta variable simboliza la tecla a presionar para que el usuario deje de jugar,
    en caso que aun tenga intentos restantes */

    cout<<"Numero Magico"<<endl;
    cout<<"A continuacion tendra que adivinar un numero del 1 al 100, para lo cual solo tendra 5 intentos."<<endl;
    cout<<"Si en algun momento desea dejar de jugar presione 0";
    
    n = magico(n);

    if (n == stop) //Si el numero que ingresa el usuario es cero se detendrá el programa
    {
        cout<<endl<<"Vuelva pronto"<<endl;//Se mostrará este mensaje para cuando el usuario ya no quiera jugar.
    }
    return 0;
}