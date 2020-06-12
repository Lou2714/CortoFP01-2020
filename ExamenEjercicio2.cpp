#include <iostream>

using namespace std;

int main(){
    int a, b = 35, c = 40;

    a = b*10 + c++;

    cout<< "El valor de a es: "<<a;

    return 0;
}