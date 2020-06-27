#include <iostream>

using namespace std;
char codigo (char frase[], int m){
    char code[10] = {'m','u', 'r', 'c', 'i', 'e', 'l', 'a', 'g', 'o'};//Se crea un array que contenga las letras "murcielago", para posteriormente 
    //comparar su posición
    for (int i = 0; i < m; i++)
    {
        if (frase[i] == code[0] )//Se compara si la letra que tiene la posición i es igual a la letra de la posición cero del array code
        {
            frase[i] = '0';//Si es así se reemplaza esa letra por el numero cero, este proceso se aplica en todad la frase
            
        }else if (frase[i] == code[1])
        {
            frase[i] = '1';
        }else if (frase[i] == code[2])
        {
           frase[i] = '2';
        }else if (frase[i] == code[3])
        {
            frase[i] = '3';
        }else if (frase[i] == code[4])
        {
            frase[i] = '4';
        }else if (frase[i] == code[5])
        {
            frase[i] = '5';
        }else if (frase[i] == code[6])
        {
            frase[i] = '6';
        }else if (frase[i] == code[7])
        {
            frase[i] = '7';
        }else if (frase[i] == code[8])
        {
            frase[i] = '8';
        }else if (frase[i] == code[9])
        {
            frase[i] = '9';
        }
    }
    cout<<endl<<"La frase codificada es la siguiente: "<<frase;
}
int main(){
    int size;
    char frase[100];//Se establece que la frase introducida tendrá un límite de 100 caracteres
    cout<<"     CODIFICACION DE MENSAJE  "<<endl;
    cout<<"Ingrese una frase o palabra : "; 
    cin.getline(frase,100);
    cout<<"La frase sin codificar es: "<<frase<<endl;
    size = sizeof(frase)/sizeof ( frase[0]);//Se obtiene el tamaño para tener un numero que limite el contador de la funcion código
    codigo(frase, size);//Se le entrega la frase y su tamaño a la función
    return 0;
}