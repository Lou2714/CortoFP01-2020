#include <iostream>

using namespace std;

int main(){

    float a, b, c, d, e;
    float media;

    cout<<"Ingrese 5 numeros para sacar su media: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    media = (a + b + c + d + e)/5;
    cout<<"La media de sus 5 numeros es: "<<media;

    return 0;
}