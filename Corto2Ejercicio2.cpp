#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a, b, c;
    float x, y;
    
    cout<<"Trinomio cuadrado de la forma ax^2 + bx + c"<<endl;
    cout<<"Ingrese los valores de a, b y c"<<endl;
    cout<<"Ingrese a: ";
    cin>> a;
    cout<<"Ingrese b: ";
    cin>> b;
    cout<<"Ingrese c: ";
    cin>> c;

    x = sqrt (a);
    y = sqrt (c);

    if(2*(x*y ) == b)
    {
        
        cout<<"Es un trinomio de cuadrado perfecto";
    }else{
        cout<<"No es un trinomio de cuadrado perfecto";
    }
    

    return 0;
}