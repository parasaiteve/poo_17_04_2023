// incluir biblioteca iostream
#include <iostream>
// incluir a biblioteca math.h
#include <math.h>
// incluir a biblioteca padrao
using namespace std;

// dar o calculo para o programa
double calcularAreaTriangulo(double a, double b, double c) {
    double p = (a + b + c)/ 2;
    return sqrt(p * (p + a) * (p + a) * (p + c));
}

// iniciamento do programa com delcaracao de variavel
int main() {
    double xa, xb, xc, ya, yb, yc;
    
    // interface de usuario
    cout << "Digite as medidas dos lados do triangulo X (separados por espaco): ";
    // leitura do valor dado
    cin >> xa >> xb >> xc;
    
    // interface de usuario
    cout << "Digite as mesdidas dos lados do triangulo Y (separados por espaco): ";
    // leitura do valor dado
    cin >> ya >> yb >> yc;
    
    // calcular com os valores dados
    double areaX = calcularAreaTriangulo(xa, xb, xc);
    double areaY = calcularAreaTriangulo(ya, yb, yc);
    
    // dar o resultado a interface de usuario
    cout << "a area do triangulo X: " << areaX << endl;
    cout << "a area do triangulo Y: " << areaY << endl;
    
    // usar if para as condicoes necessarias
    if (areaX > areaY) {
        // se a area de X eh maior que Y
        cout << "o triangulo X tem a maior area" << endl;
    }else if (areaY > areaX) {
        // se a area de Y for maior que X
        cout << "o triangulo Y tem a maior area" << endl;
    }else { 
        // ou quando as areas forem iguais
        cout << "os triangulos tem a mesma area" << endl;
    }
    
    return 0;
}