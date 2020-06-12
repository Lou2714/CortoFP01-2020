#include <iostream>

using namespace std;

int main(){
    int m = 3345, k;

    k = (m*=10) / (m-=5);

    cout<< "El valor de k es: "<<k;

    return 0;
}