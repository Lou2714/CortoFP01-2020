#include <iostream>

using namespace std;

int main(){
    int b = 13, c;

    c = (b *= 130) + (b % 5);
    cout<< "El valor de c es: "<<c;

    return 0;
}