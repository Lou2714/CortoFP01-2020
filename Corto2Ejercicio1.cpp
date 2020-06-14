#include <iostream>
using namespace std;
//Creamos una función para calcular el salario Total del trabajador
float SalarioTotal(int Ht, int He){
    float respuesta;
    respuesta = (Ht * 1.75) + (He * 2.50); 
    return respuesta; //Pedimos que nos returne el resultado de la suma de las horas trabajadas con las horas extras
}
//Creamos una función para calcular el salario real, aplicando los descuentos correspondientes
float SalarioReal(float salario){
    float SeguroSocial = 0.04, AFP = 0.0625, Renta = 0.1, total;
    if (salario > 500)
    {   //Si el salario es mayor de 500 se le aplicará el descuento de la renta
        total = salario - ((salario * SeguroSocial) + (salario * AFP) + (salario * Renta));
    }else{
        total = salario - ((salario * SeguroSocial) + (salario * AFP));
    }
    return total;
}
int main(){
    int n, HE, HT;
    float total, salarioT, salarioR;
    cout<<"CALCULADORA DE SALARIOS"<<endl<<endl;
    cout<<"Ingrese la cantidad de empleados ";
    cin>>n;
    //Utilizamos for para pedir los datos de los trabajadores las veces que ha introducido el usuario anteriormente  
    for (int i = 1; i <= n; i++)
    {
        cout<<"Ingrese las horas trabajadas por trabajador: ";
        cin>>HT;
        cout<<"Ingrese las horas extras realizadas por los trabajadores: ";
        cin>>HE;
        salarioT = SalarioTotal(HT,HE); /*Se le asigna a la variable salarioT el resultado de la función de salario total y entre paréntesis se le colocan los datos a utilizar en dicha función*/
        cout<<"El salario total del trabajador es: "<< salarioT<<endl; 
        /*La impresión del salario real se coloca dentro del for para que aparezca después de pedir las horas, ya que, de esta manera se disminuyen las 
        posibilidades de confundir los salarios entre empleados*/
        salarioR = SalarioReal(salarioT);//Sigue la lógica del salario total
        cout<<"El salario real del trabajador es: "<< salarioR<<endl;
    }return 0;
}