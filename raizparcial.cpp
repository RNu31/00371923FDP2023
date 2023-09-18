#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, B = 0, resultado = 0;
    /*a=10;
    b=20;
    c=30;*/
    cout << "ingrese el primer numero" << std::endl;
    cin >> a;
    cout << "ingrese el segundo valor" << std::endl;
    cin >> b;
    cout << "ingrese el tercer valor" << std::endl;
    cin >> c;
    B = b * b;
    resultado = (B - (4 * a * c));
    double resultadoT1 = (-b-sqrt(resultado))/(2*a);
    double resultadoT2 = (-b+sqrt(resultado))/(2*a);
     if (resultado== 0)
    {
        float x=-b/c;
        cout << "esto no se puede resolver";
    }
    else if (resultado > 0)
    {
    cout << "esta es la raiz" << resultadoT1;
    cout << "esta es la raiz en negativo" << resultadoT2;
    }
    else{
        cout << "esto no se puede resolver";
    }


    // std::cout<<"esta es la raiz"<<resultado;
    /*esto escribe la raiz de una ecuacion resuelta por formula general*/

    return 0;
}
