#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double calcularPi(){
    double resultado{0};
    
    for (int i{0}; i < 1000000; i++)
    {
        resultado = resultado + pow((-1), i)/((2*i)+1);
    }
    
    return resultado*4;
}

int main(){
    double resultado;

    resultado = calcularPi();

    cout<<"El numero pi es igual a "<< setprecision(7) << resultado;
    
    return 0;
}