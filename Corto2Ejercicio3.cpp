#include <iostream>
#include <string>

using namespace std;

int main(){

    int morado = 150 , celeste = 77 , blanco = 720 , rosado = 100 , negro = 80;
    string opcion;

    cout<<"LOTERIA DE COLORES"<<endl;
    cout<<"A continuacion se le presentaran 5 colores, por lo cual se le pide que escoja uno"<<endl;
    cout<<"Morado"<<endl;
    cout<<"Celeste"<<endl;
    cout<<"Blanco"<<endl;
    cout<<"Rosado"<<endl;
    cout<<"Negro"<<endl;
    cout<<"Ingrese el color que desea: "<<endl;
    cin>> opcion;

    if (opcion == "Morado")
    {
        cout<<"Usted ha ganado "<<morado<<" dolares"<<endl;
    }else if (opcion == "Celeste")
    {
        cout<<"Usted ha ganado "<<celeste<<" dolares"<<endl;
    }else if (opcion == "Blanco")
    {
        cout<<"Usted ha ganado "<<blanco<<" dolares"<<endl;
    }else if (opcion == "Rosado")
    {
        cout<<"Usted ha ganado "<<rosado<<" dolares"<<endl;
    }else
    {
        cout<<"Usted ha ganado "<<negro<<" dolares"<<endl;
    }
    
    return 0;
}