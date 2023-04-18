// incluir biblioteca iostream
#include <iostream>
// incluir a biblioteca math.h
#include <cmath>
// incluir a biblioteca padrao
using namespace std;

//criar uma classe
class Triangulo {
private:
    double a, b, c;
public:
//suar caracteristicas
    Triangulo(double lado1, double lado2, double lado3) {
        a = lado1;
        b = lado2;
        c = lado3; 
    }

// dar o calculo para o programa
    double calcularArea() {
       double p = (a + b + c)/ 2;
       double area(p * (p - a) * (p - a) * (p - c));
       return area;
    }
    double getLado1() { return a; }
    double getLado2() { return b; }
    double getLado3() { return c; }
};
    

// iniciamento do programa com delcaracao de variavel
int main() {
    double a, b, c;
    
    // interface de usuario
    cout << "Digite as medidas dos lados do triangulo X (separados por espaco): ";
    // leitura do valor dado
    cin >> a >> b >> c;
    Triangulo X(a, b, c);
    
    // interface de usuario
    cout << "Digite as mesdidas dos lados do triangulo Y (separados por espaco): ";
    // leitura do valor dado
    cin >> a >> b >> c;
    Triangulo Y(a, b, c);
    
    // calcular com os valores dados
    double areaX = X.calcularArea();
    double areaY = Y.calcularArea();
    
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
