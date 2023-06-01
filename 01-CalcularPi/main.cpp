#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float calcularPi(){
    float resultado{0};
    float corte{3.141592/4};
    double i{0};

    while (resultado != corte)
    {
        resultado = resultado + pow((-1), i)/((2*i)+1);
        i++;
    }
    
    return resultado*4;
}

int main(){
    float resultado;

    resultado = calcularPi();

    cout<<"El numero pi es igual a: "<< setprecision(7) << resultado;
    
    return 0;
}